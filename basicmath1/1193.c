#include <stdio.h>

int main() {
    int a;
    int k=1;
    
    scanf("%d" , &a);
    
    while(1) // 라인을 찾는 코드 
    {
        if((k-1)*(k)/2 < a && a <= (k)*(k+1)/2)
        {
            break;
        }
        k++;
    }
    
    if(k%2 !=0) // 홀수 일 때
    {
        int sum = k*(k+1)/2;
        printf("%d",sum-a+1); // 홀수번째 라인에서 인수들은 왼쪽으로 가면서 / 기준으로 왼쪽 + 오른쪽으로 -
        printf("/");
        printf("%d",k-(sum-a)); 
        
    }
    else // 짝수 일 떄
    {
        int sum = k*(k+1)/2;
        printf("%d",k-(sum-a)); // 짝수번쨰 라인에서 인수들은 오른쪽으로 가면서 / 기준으로 왼쪽 - 오른쪽 + 
        printf("/");
        printf("%d",sum-a+1);
    }
}