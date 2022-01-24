#include<stdio.h>
int main(){
    int n,a,b,l=-1,x=0;
    
    printf("숫자를 입력하시오:");
    scanf("%d",&n);
    
    a = n / 10;
    b = n % 10;
    
    while(n!=l){
        int sum = a+b;
        l = b*10+sum%10;
        
        x++;
        
        a = l /10;
        b = l %10;
    }
    printf("%d",x);
}