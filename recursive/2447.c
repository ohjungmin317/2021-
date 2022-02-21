/*재귀적인 패턴으로 별을 찍어 보자. N이 3의 거듭제곱(3, 9, 27, ...)이라고 할 때, 크기 N의 패턴은 N×N 정사각형 모양이다.

크기 3의 패턴은 가운데에 공백이 있고, 가운데를 제외한 모든 칸에 별이 하나씩 있는 패턴이다.*/

#include<stdio.h>

int recur_star(int i, int j, int k){
    
    if((i/k) % 3 == 1 && (j/k) % 3 == 1) // 3으로 나눴을 떄 나머지 부분은 3의 배수가 아닌부분은 공백
    {
        printf(" ");
    }
    else
    {
        if(k/3==0) // 3으로 나눴을때 0 -> 3의 배수는 *
        {
            printf("*");
        }
        else
        {
            recur_star(i,j,k/3); // 그 외 나머지는 다시 재귀함수 돌려준다.
        }
    }
    return 0;
}

int main()
{
    int num;
    scanf("%d",&num);
    
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            recur_star(i,j,num); // 2중 for을 이용하여 별찍기 만들어주고(별이 찍는 부분과 공백을 구분하기 위해 2중 for문을 사용한다.)
        }printf("\n"); // for문 i에 들여쓰기 기능 
    }
}