/*피보나치 수는 0과 1로 시작한다 0번째 피보나치 수는 0이고, 1번째 피보나치 수는 1이다. 그 다음 2번째 부터는 바로 앞 두 피보나치 수의 합이 된다.

이를 식으로 써보면 Fn = Fn-1 + Fn-2 (n ≥ 2)가 된다.

n=17일때 까지 피보나치 수를 써보면 다음과 같다.

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597

n이 주어졌을 때, n번째 피보나치 수를 구하는 프로그램을 작성하시오. */

#include<stdio.h>
int fibo(int n){
    
    if(n==0) return 0; // n이 0일떄 0을 return
    else if (n==1) return 1; // n이 1일때 1을 return 
    else return fibo(n-1) + fibo(n-2); // 그외 나머지는 피보나치수열 공식을 넣어주면 된다.
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",fibo(num));
}