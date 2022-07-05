#include<stdio.h>
#include<stdlib.h>

/* 문제해결법 : 수직선 위에 N개의 좌표 X1, X2, ..., XN이 있다. 이 좌표에 좌표 압축을 적용하려고 한다.

Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 서로 다른 좌표의 개수와 같아야 한다.

X1, X2, ..., XN에 좌표 압축을 적용한 결과 X'1, X'2, ..., X'N를 출력해보자.*/

//입력

/* 5
2 4 -10 4 -9 */

//출력

// 2 3 0 3 1

/* 문제 해결법 2일때 2보다 작은수 -10 -9 : 2개 / 4보다 작은수 -10 -9 2 :3개 / -10보다 작은수 : 0개 / -9보다 작은수 -10 : 1개  */ 

/* 정렬 -> qsort를 이용하여 */ 
int compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
/* c++의 unique 함수 구현  [unique 함수는 연속으로 중복 되는 원소를 vector의 제일 뒷부분으로 쓰레기 값으로 보낸다.]*/
/* 그래서 연속으로 중복 되는 원소만을 없애기 때문에 반드시 정렬을 시행해 주어야 한다.*/
int unique(int *arr, int size){ 
    int i,j=0;
    for(i=1; i<size; i++){
        if(arr[j] == arr[i]) continue;
        arr[++j] = arr[i];
    }
    return ++j;
}

int binarysearch(int *arr, int size, int key){

    int low, high;
    int mid;

    low =0;
    high = size -1;

    while(low <= high){
        mid = (low + high) /2;
        if(key == arr[mid]){
            return mid;
        }

        else if(key < arr[mid]){
            high = mid - 1;
        }
       
       else if(key > arr[mid]){
            low = mid + 1;
       }
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d",&n);

    int *arr,*list;

    arr = (int*) malloc(sizeof(int)*n);
    list =(int*) malloc(sizeof(int)*n);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        list[i] = arr[i];
    }

    qsort(list,n,sizeof(int),compare);

    int count = unique(list,n);

    for(int i=0; i<n; i++){
        int temp = binarysearch(list, count, arr[i]);
        printf("%d ",temp);
    }

    free(arr);
    free(list);


}