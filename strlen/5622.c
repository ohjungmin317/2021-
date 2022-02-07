#include <stdio.h>
#include<string.h>


int dial(int n){ // 다이얼 눌렀을 때의 경우의 수 case 구문에 각번호 +1 씩 해줘야 한다. -> 한칸 더 옆에 있는 숫자를 누르기 위해서는 1초의 시간이 더 필요 
    
    switch(n){
        
        case 'A':
        case 'B':
        case 'C':
            return 3;
        
        case 'D':
        case 'E':
        case 'F':
            return 4;
        
        case 'G':
        case 'H':
        case 'I':
            return 5;
        
        case 'J':
        case 'K':
        case 'L':
            return 6;
        
        case 'M':
        case 'N':
        case 'O':
            return 7;
        
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            return 8;
        
        case 'T':
        case 'U':
        case 'V':
            return 9;
        
        default: // 0(other) + XYZ의 값 은 default 값으로 정의 
            return 10;
    }
}

int main()
{
    char arr[15]; // 첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어의 길이는 2보다 크거나 같고, 15보다 작거나 같다.
    int sum=0;
    
    scanf("%s",arr);
    int len=strlen(arr); // strlen 사용
    for(int i='A'; i<='Z'; i++) // A부터 Z까지의 반복문 
    {
        for(int j=0; j<len; j++){ 
            if(arr[j]==i) // 입력된 값과 반복문에서의 값이 같을 때
            sum+=dial(i); // dial의 값을 더해준다. 
        }
    }
    printf("%d",sum);
    return 0;
}