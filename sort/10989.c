/*N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.*/
#include<stdio.h>
int main()
{
    int arr[10001] = {0,};
    
    int n,num;
    
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){ // 정렬해야되는 수 입력
        scanf("%d",&num);
        arr[num]++; // 값들을 누적 -> 카운팅 정렬 
    }
    
    for(int i=0; i<10001; i++){
        if(arr[i]==0) continue;
        
        for(int j=0; j<arr[i]; j++)
            printf("%d\n",i);
    }
}