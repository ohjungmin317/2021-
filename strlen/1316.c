/*
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오. */

#include<stdio.h>
#include<string.h>

int selectword(char a[], int len) // 단어 그룹에 대한 검사 함수 
{
    int keyword=0;
    int i,j;
    
    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
            if(a[i]==a[j])
            {
                keyword = j-i;
                
                if(keyword>1) // 위 조건을 반복하고 1보다 작을 때 이 조건문 실행 시작 
                { // 그룹단어인지 검사하는 조건문 
                    if(a[j-1] !=a[j])
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

int main()
{
    int num;
    char arr[100]; // 조건 단어의 개수 ( 0 <= num <= 100 )
    int count=0; // 단어가 몇번 나오는지에 대한 횟수 변수 
    
    scanf("%d",&num);
    
    for(int i=0; i<num; i++)
    {
        scanf("%s",arr);
        count = count + selectword(arr, strlen(arr)); // 단어 입력후 함수 호출에 대해서 단어 인지 검사후 단어가 맞으면 count에 횟수 1 증가 단어 호출 횟수까지 반복문 시행 
    }
    
    printf("%d",count);
}