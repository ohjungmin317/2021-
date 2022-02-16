/* 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오. */

#include<stdio.h>
int main()
{
    int a,i;
    int num,cnt=0;
    
    
    scanf("%d",&a);
    
    while(a--) { // a의 개수에 따라 반복하는 횟수가 정해진다.
        scanf("%d",&num);
        
        for(i=2; i<num; i++) // 소수이기에 1은 x -> 2부터 반복문 시작 
        {
            if(num%i==0) break;
            
        }
        if(i==num) cnt++;
    }
    printf("%d",cnt);
}