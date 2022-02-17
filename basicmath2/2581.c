/*자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.

예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 이들 소수의 합은 620이고, 최솟값은 61이 된다.*/

#include<stdio.h>
int main()
{
    int min,max;
    int num=0 , sum=0; // num -> 결과에 대한 최솟값  sum -> 소수 다 더한 값
    
    scanf("%d",&min);
    scanf("%d",&max);
    
    for(int i=min; i<=max; i++) // 범위에 대한 수는 안에서 반복문을 돌린다. 
    {
        int cnt=0; // count -> 소수에 대한 값 
        if(i==1) // 1이면 넘어간다
            continue;
        for(int j=2; j<i; j++) // 소수는 2일 때 부터 시작이다 1은 x 
        {
            if(i%j==0) // i와 j를 나눴을 때 나머지가 0 이 나오면 
            {
                cnt=1; // count 1 증가 
                break;
            }
        }
        if(cnt==0){ // 만약 count가 0이되면 소수라고 판단이 되어 
            if(num==0){ // 최소값이 0이 되어야
                num = i; // 최소값은 i에 누적
            }
            sum +=i; // 해당값에 누적이 된다. 
        }
    }
    if(sum !=0) printf("%d\n%d",sum,num);
    else printf("-1"); // 소수가 없으면 -1을 출력해준다.
}