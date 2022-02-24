/*N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.*/
// -> O(nlogn) => 병합정렬 퀵정렬 힙정렬로 문제를 해결해야하는데 나는 병합으로 문제를 해결함.

#include<stdio.h>
void merge(int data[], int p, int q, int r){ // 수를 병합해주는 과정 
    int i=p, j= q+1, k=p;
    int temp[2000001]; // 배열의 방 기존에 나와있는 수 1000000 + 1000001 = 2000001
    while(i<=q&& j<=r){ // 분할 정렬된 데이터의 값 합병 
        if(data[i]<=data[j]) temp[k++] = data[i++];
        else temp[k++] = data[j++];
    }
    while(i<=q) // 남아 있는 값들을 일괄 복사
    temp[k++] = data[i++];
    while(j<=r) // 남아 있는 값들을 일괄 복사 
    temp[k++] = data[j++];
    k--;
    
    for(int a = p; a<=r; a++) data[a] = temp[a];
}

void mergeSort(int data[], int p, int r){ // 합병 정렬
    int q;
    if(p<r){
        q =(p+r)/2; // 중간위치 계산하여 리스트 균등 분할
        mergeSort(data,p,q); // 앞쪽 부분 리스트 정렬
        mergeSort(data, q+1, r); // 뒷쪽 부분 리스트 정렬
        merge(data,p,q,r); // 앞 뒤 정렬된 부분 합병하는 과정
    }
}

int main()
{
    int data[2000001]={0,};
    int num;
    scanf("%d\n",&num);
    
    for(int i=0; i<num; i++){
        scanf("%d\n",&data[i]);
    }
    mergeSort(data,0,num-1); // 합병정렬 수행함수 호출 
    
    for(int i=0; i<num; i++){
        printf("%d\n",data[i]); // 정렬된 값 호출 
    }
}