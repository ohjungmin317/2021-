/*
�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�. ���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.

�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#include<stdio.h>
#include<string.h>

int selectword(char a[], int len) // �ܾ� �׷쿡 ���� �˻� �Լ� 
{
    int keyword=0;
    int i,j;
    
    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
            if(a[i]==a[j])
            {
                keyword = j-i;
                
                if(keyword>1) // �� ������ �ݺ��ϰ� 1���� ���� �� �� ���ǹ� ���� ���� 
                { // �׷�ܾ����� �˻��ϴ� ���ǹ� 
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
    char arr[100]; // ���� �ܾ��� ���� ( 0 <= num <= 100 )
    int count=0; // �ܾ ��� ���������� ���� Ƚ�� ���� 
    
    scanf("%d",&num);
    
    for(int i=0; i<num; i++)
    {
        scanf("%s",arr);
        count = count + selectword(arr, strlen(arr)); // �ܾ� �Է��� �Լ� ȣ�⿡ ���ؼ� �ܾ� ���� �˻��� �ܾ ������ count�� Ƚ�� 1 ���� �ܾ� ȣ�� Ƚ������ �ݺ��� ���� 
    }
    
    printf("%d",count);
}