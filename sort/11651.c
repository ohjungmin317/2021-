#include<stdio.h>
#include<stdlib.h>

typedef struct pos
{
    int x;
    int y;
}Pos;


int merge(Pos*arr, int left, int mid, int right){

    int fidx = left;
    int ridx = mid + 1;
    int sidx = left;

    int i;

    Pos *sortarr = (Pos*)malloc(sizeof(Pos)*(right+1));

    while(fidx<=mid && ridx <= right){
        
        if(arr[fidx].y < arr[ridx].y) sortarr[sidx] = arr[fidx++];
        else if(arr[fidx].y > arr[ridx].y) sortarr[sidx] = arr[ridx++];
        else
        {
            if(arr[fidx].x < arr[ridx].x) sortarr[sidx] = arr[fidx++];
            else sortarr[sidx] = arr[ridx++];
        } sidx++;
    }

    if(fidx > mid)
    {
        for(i = ridx; i<=right; i++, sidx++) sortarr[sidx] = arr[i];

    }
    else
    {
        for(i=fidx; i<=mid; i++,sidx++) sortarr[sidx] = arr[i];

    }

    for(i=left; i<=right; i++) arr[i] = sortarr[i];

    free(sortarr);

}

int mergeSort(Pos*arr, int left, int right){
    int mid;
    if(left < right){
        mid = (left+ right) /2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);   
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    Pos *arr = (Pos *)malloc(sizeof(Pos)*n);
    for(int i=0; i<n; i++) scanf("%d %d",&arr[i].x,&arr[i].y);
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++) printf("%d %d\n",arr[i].x,arr[i].y);

    free(arr);
}
