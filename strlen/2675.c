/*���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�. S���� QR Code "alphanumeric" ���ڸ� ����ִ�.

QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: �̴�. */

#include<stdio.h>
#include<string.h>
int main()
{

int a;
char arr[20];
int repeat;
int len;

scanf("%d",&a); // ��ü Ƚ�� �Է�

for(int i=0; i<a; i++) 
{
    scanf("%d",&repeat); // ���ڿ� �ݺ� Ƚ��
    scanf("%s",arr);

    len = strlen(arr); // ���ڿ� ���� 

    for(int j=0; j<len; j++) // ���ڿ� ���� �ݺ� 
    {
        for(int k=0; k<repeat; k++){ // ���ڿ� ���̿� ���� ��� �ݺ��� 
            printf("%c",arr[j]);
        }
    }
    printf("\n");
}

}