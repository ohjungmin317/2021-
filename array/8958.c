/*
"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. ������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.

"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.

OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
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