/*N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.*/

#include<stdio.h>
int main()
{
    int num;
    int arr[1000]={0,}; // 배열 초기화
    int temp;
    scanf("%d",&num); // 정렬할 개수 출력
    
    for(int i=0; i<num; i++){
        scanf("%d\n",&arr[i]);
        
    }
    
    for(int i=0; i<num; i++){
        for(int j=0; j<num-1; j++){
            if(arr[j]>arr[j+1]){ // 오름차순 정렬
            
            temp = arr[j+1]; // 버블정렬 temp에 임시값 저장해놓고 정렬 시작 
            arr[j+1] = arr[j];
            arr[j] = temp;
            }
        }
    }
    
    for(int i=0; i<num; i++){
        printf("%d\n",arr[i]); // 정렬된 배열값 출력 
    }
}