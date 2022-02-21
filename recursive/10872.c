/*0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.*/

#include<stdio.h>
int fact(int n){
    
    if(n==0)
    return 1;
    
    return n * fact(n-1);
}

int main()
{
    
    int num;
    scanf("%d",&num);
    printf("%d\n",fact(num));
}