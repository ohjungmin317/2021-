#include<stdio.h>
#include<stdlib.h>

/*qsort 사용하는법 :
void qsort(void *base, size_t nel, size_t width, int(*compare)(const void*, const void*)
-> parameter : (1) 정렬할 배열 (2) 배열의 총 element 개수 (3) 배열 한 개의 크기 (4) 비교를 수행할 함수의 포인터(const void)로 선언*/

typedef struct Sort
{   
    int x;
    int y;
}sort;

int compare (const void *a, const void *b)
{
    sort* p1 = (sort*)a;
    sort* p2 = (sort*)b;

    if(p1->x < p2->x) return -1;
    
    else if(p1->x > p2->x) return 1;

    else{
        if(p1->y < p2->y) 
        return -1;

        else if(p1->y > p2->y) 
        return 1;
        
    }
    return 0;

    return 0;
}

int main()
{  
    int n;
    scanf("%d",&n);
    sort *arr = (sort*)malloc(n*sizeof(sort)); // 동적으로 할당해줌 
    for(int i=0; i<n; i++) scanf("%d %d",&arr[i].x,&arr[i].y);
    qsort(arr, n, sizeof(arr[0]),compare); // segfault 오류 뜨는 부분  
    for(int i=0; i<n; i++) printf("%d %d\n",arr[i].x,arr[i].y);

    return 0;
}