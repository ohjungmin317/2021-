/*�迭�� �����ϴ� ���� ����. ���� �־�����, �� ���� �� �ڸ����� ������������ �����غ���.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int arr[10000]={0,};
    char s[10000]; // ���ڿ��� �޾Ƶ�� ������ ���ش�.
    int temp;
    
    scanf("%s",s);
    
    for(int i=0; i<strlen(s); i++){ // ���ڿ��� ���� strlen(5) -> ���ڿ�[0] ~ ���ڿ�[1] = 5���� �ν�
        arr[i] = s[i] - '0';
    }
    
    for(int i=0; i<strlen(s); i++){
        for(int j=0; j<strlen(s)-1; j++){
            if(arr[j]<arr[j+1]){ // ���� ������ ����� ���� -> �������� ���� 
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
    }
    for(int i=0; i<strlen(s); i++){
        printf("%d",arr[i]);
    }
}