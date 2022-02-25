/*배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int arr[10000]={0,};
    char s[10000]; // 문자열로 받아드려 정렬을 해준다.
    int temp;
    
    scanf("%s",s);
    
    for(int i=0; i<strlen(s); i++){ // 문자열의 갯수 strlen(5) -> 문자열[0] ~ 문자열[1] = 5개로 인식
        arr[i] = s[i] - '0';
    }
    
    for(int i=0; i<strlen(s); i++){
        for(int j=0; j<strlen(s)-1; j++){
            if(arr[j]<arr[j+1]){ // 버블 정렬을 사용해 정렬 -> 내림차순 정렬 
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
    }
    for(int i=0; i<strlen(s); i++){
        printf("%d",arr[i]);
    }
}