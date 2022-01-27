/*문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다. S에는 QR Code "alphanumeric" 문자만 들어있다.

QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다. */

#include<stdio.h>
#include<string.h>
int main()
{

int a;
char arr[20];
int repeat;
int len;

scanf("%d",&a); // 전체 횟수 입력

for(int i=0; i<a; i++) 
{
    scanf("%d",&repeat); // 문자열 반복 횟수
    scanf("%s",arr);

    len = strlen(arr); // 문자열 길이 

    for(int j=0; j<len; j++) // 문자열 길이 반복 
    {
        for(int k=0; k<repeat; k++){ // 문자열 길이에 따른 출력 반복문 
            printf("%c",arr[j]);
        }
    }
    printf("\n");
}

}