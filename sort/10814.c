#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct list
{
    char name[101]; // 길이가 100보다 작거나 같은 문자열 이기 때문에 100이 포함이 되어야 한다.
    int age;
    int index;
    
}sort_list;

int compare(const void *a, const void *b) // compare 함수 사용! 
{
    sort_list* p1 = (sort_list*)a;
    sort_list* p2 = (sort_list*)b;

    if(p1->age <p2->age) return -1;

    else if(p1->age > p2->age) return 1;

    else{
        if(p1->index < p2->index) return -1;
        
        else if(p1->index > p2->index) return 1;

        return 0;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    sort_list *arr = (sort_list*)malloc(sizeof(sort_list)*n);
    for(int i=0; i<n; i++){
        scanf("%d %s",&arr[i].age, &arr[i].name);
        arr[i].index = i;
    }


    qsort(arr,n,sizeof(sort_list),compare);

    for(int i=0; i<n; i++) printf("%d %s\n",arr[i].age, arr[i].name);
}