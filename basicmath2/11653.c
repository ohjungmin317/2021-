/* 정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오. */

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=2; i<n; i++)
    {
        while(1)
        {
            if(n % i ==0) // ------------> 소인수분해 공식
            {
                printf("%d\n",i);
                n/=i;
            }
            else break;
        }
    }
    if(n !=1) printf("%d\n",n); // 소인수분해 중 소수일때에는 이렇게 나타내 주면 된다.
    
    
    
}