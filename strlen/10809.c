/*���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, ���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#include<stdio.h>
#include<string.h>

int main()
{
    int word[26]={0}; // ���ĺ� ����
    char arr[100];
    int temp =0;
    int len; 
    
    
    scanf("%s",arr);
    
    len = strlen(arr); // ���ڿ� ����
    
    for(int i=0; i<26; i++){
        word[i]=-1; // �迭 �ȿ� �ִ� �ܾ� -1�� �ʱ�ȭ 
    }
    
    for(int i=0; i<len; i++)
    {
        temp = arr[i]-97; // �ƽ�Ű�ڵ� 97 = a -> ���ϸ鼭 �ƽ�Ű�ڵ� ������ ���ĺ� Ȯ��  
        if(word[temp] !=-1){ // -1�� �ƴϸ� ��� 
            continue;
        }
        else // -1�̸� i�� �� 
        {
            word[temp] = i;
        }
    }
    for(int i=0; i<26; i++){
        printf("%d ",word[i]);
    }
    
}