#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>


typedef struct list
{
    char x[51];
    int len;

}sort_list;

int compare(const void *a , const void *b){

    sort_list* p1 = (sort_list*)a;
    sort_list* p2 = (sort_list*)b;

    if(p1->len < p2->len) return -1;

    else if(p1->len > p2->len) return 1;

    return strcmp(p1->x, p2->x);
    
}

int main()
{
    int n;
    scanf("%d",&n);

    sort_list* arr = (sort_list*)malloc(sizeof(sort_list)*n);

    for(int i=0; i<n; i++){
        while(getchar() != '\n');
        scanf("%s",arr[i].x);
        arr[i].len = strlen(arr[i].x);
    }

    qsort(arr,n,sizeof(sort_list),compare);
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (!strcmp(arr[i].x, arr[j].x)) {
                strcpy(arr[j].x, "\0"); 
                arr[j].len = 0; 
            }            
        }
    }

     for (int i = 0; i < n; i++) { 
        if(arr[i].len) printf("%s\n", arr[i].x);
    }
    free(arr);
}