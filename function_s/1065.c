/*
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, 
N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. */ 
// <함수를 이용해서 문제를 푼 방법>
#include<stdio.h>

int han_num(int num){
    int a=0;
    int b=0;
    int c=0;
    int diff1=0;
    int diff2=0;
    int count=0;
    
    for(int i=1; i<=num; i++){
        a=i/100; // 한수 구하는 방법
        b=(i%100)/10;
        c=i%10;
        
        diff1=a-b;
        diff2=b-c;
        
        if(a == 0) // 1~99까지의 수는 무조건 한수
        {
            diff1 = diff2;
        }
        if(diff1==diff2)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int s;
    int count;
    
    scanf("%d",&s);
    
    count = han_num(s);
    
    printf("%d",count);
    
}

// 함수를 이용하지 않고 문제를 푼 방법

/*
#include<stdio.h>

int main()
{
    int a=0,b=0,c=0;
    int count=0;
    int num;
    int diff1=0, diff2=0;
    
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        a = i/100;
        b = (i%100)/10;
        c = i%10;
        
        diff1 = a - b;
        diff2 = b - c;
        
        if(a==0){
            diff1 = diff2;
        }
        if(diff1==diff2){
            count++;
        }
        
    }
    printf("%d",count);
}
*/