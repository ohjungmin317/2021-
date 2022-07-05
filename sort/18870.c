#include<stdio.h>
#include<stdlib.h>

/* �����ذ�� : ������ ���� N���� ��ǥ X1, X2, ..., XN�� �ִ�. �� ��ǥ�� ��ǥ ������ �����Ϸ��� �Ѵ�.

Xi�� ��ǥ ������ ��� X'i�� ���� Xi > Xj�� �����ϴ� ���� �ٸ� ��ǥ�� ������ ���ƾ� �Ѵ�.

X1, X2, ..., XN�� ��ǥ ������ ������ ��� X'1, X'2, ..., X'N�� ����غ���.*/

//�Է�

/* 5
2 4 -10 4 -9 */

//���

// 2 3 0 3 1

/* ���� �ذ�� 2�϶� 2���� ������ -10 -9 : 2�� / 4���� ������ -10 -9 2 :3�� / -10���� ������ : 0�� / -9���� ������ -10 : 1��  */ 

/* ���� -> qsort�� �̿��Ͽ� */ 
int compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
/* c++�� unique �Լ� ����  [unique �Լ��� �������� �ߺ� �Ǵ� ���Ҹ� vector�� ���� �޺κ����� ������ ������ ������.]*/
/* �׷��� �������� �ߺ� �Ǵ� ���Ҹ��� ���ֱ� ������ �ݵ�� ������ ������ �־�� �Ѵ�.*/
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