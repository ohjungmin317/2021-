/*알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.*/

#include<stdio.h>
#include<string.h>

int main()
{
    int word[26]={0}; // 알파벳 개수
    char arr[100];
    int temp =0;
    int len; 
    
    
    scanf("%s",arr);
    
    len = strlen(arr); // 문자열 길이
    
    for(int i=0; i<26; i++){
        word[i]=-1; // 배열 안에 있는 단어 -1로 초기화 
    }
    
    for(int i=0; i<len; i++)
    {
        temp = arr[i]-97; // 아스키코드 97 = a -> 셈하면서 아스키코드 값으로 알파벳 확인  
        if(word[temp] !=-1){ // -1이 아니면 계속 
            continue;
        }
        else // -1이면 i의 값 
        {
            word[temp] = i;
        }
    }
    for(int i=0; i<26; i++){
        printf("%d ",word[i]);
    }
    
}