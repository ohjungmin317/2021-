#include<stdio.h>
#include<string.h>

void reverse(char arr[]) // ���ڿ� ���� ���� -> �ڸ����� �ϳ� �����ϸ� �迭�� �ε����� ��ĭ�� �з���(ū ���� ������ �Ǿ�� ��)
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
    char A[10002] = {0}; // �迭�� �ڸ� �� �Է¹޾ƾ� �ϴ� ũ��
    char B[10002] = {0}; // �迭�� �ڸ� �� �Է¹޾ƾ� �ϴ� ũ�� 
    char res[10003] = {0};
    
    int car=0; // �ڸ��� �ø�
    int len=0;
    
    scanf("%s %s",A,B);
    
    reverse(A);
    reverse(B);
    
    if(strlen(A) > strlen(B)) // ū �� �Ǻ� -> ū ���� ������ �Ǿ�� ���ʴ�� ����� �� 
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
        if (sum <0)// �ڸ����� �ٸ� ��� sum �� '0'�� �� �� �� ����� �ȴ�.
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
    reverse(res); // �ٽ� ���� ���� ���Ѽ� reverse
    printf("%s",res);
    
}