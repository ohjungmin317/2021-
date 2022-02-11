#include<stdio.h>
#include<string.h>

void reverse(char arr[]) // 문자열 역순 정렬 -> 자리수가 하나 증가하면 배열의 인덱스가 한칸씩 밀려남(큰 수가 기준이 되어야 함)
{
    int len = strlen(arr);
    for(int i=0; i<len/2; i++)
    {
        char temp = arr[i];
        arr[i] = arr[len - i -1];
        arr[len -i -1] = temp;
    }
}

int main()
{
    char A[10002] = {0}; // 배열의 자리 수 입력받아야 하는 크기
    char B[10002] = {0}; // 배열의 자리 수 입력받아야 하는 크기 
    char res[10003] = {0};
    
    int car=0; // 자리수 올림
    int len=0;
    
    scanf("%s %s",A,B);
    
    reverse(A);
    reverse(B);
    
    if(strlen(A) > strlen(B)) // 큰 수 판별 -> 큰 수가 기준이 되어야 차례대로 계산이 됨 
    {
        len = strlen(A);
    }
    else
    {
        len = strlen(B);
    }
    
    for(int i=0; i<len; i++)
    {
        int sum = A[i] - '0' + B[i] - '0' + car;
        if (sum <0)// 자리수가 다른 경우 sum 은 '0'이 한 번 더 계산이 된다.
        {
            sum +='0';
        }
        if(sum >9)
        {
            car =1;
        }
        else
        {
            car=0;
        }
        res[i] = sum %10 +'0';
    }
    if(car==1)
    {
        res[len] = '1';
    }
    reverse(res); // 다시 원상 복구 시켜서 reverse
    printf("%s",res);
    
}