/*
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.*/
#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    char arr[100]={0};
    int count;
    int score;
    int len;
    
    scanf("%d",&a);
    
    for(int i=0; i<a; i++)
    {
        scanf("%s",&arr);
        len = strlen(arr);
        
        for(int j=0; j<len; j++){
            if(arr[j]=='X')
            {
                count =0;
                score +=count;
            }
            else if(arr[j]=='O')
            {
                count++;
                score+=count;
            }
        }
        printf("%d\n",score);
            score = 0;
            count = 0;
    }
}