#include <stdio.h>
#include<string.h>


int dial(int n){ // ���̾� ������ ���� ����� �� case ������ ����ȣ +1 �� ����� �Ѵ�. -> ��ĭ �� ���� �ִ� ���ڸ� ������ ���ؼ��� 1���� �ð��� �� �ʿ� 
    
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
        
        default: // 0(other) + XYZ�� �� �� default ������ ���� 
            return 10;
    }
}

int main()
{
    char arr[15]; // ù° �ٿ� ���ĺ� �빮�ڷ� �̷���� �ܾ �־�����. �ܾ��� ���̴� 2���� ũ�ų� ����, 15���� �۰ų� ����.
    int sum=0;
    
    scanf("%s",arr);
    int len=strlen(arr); // strlen ���
    for(int i='A'; i<='Z'; i++) // A���� Z������ �ݺ��� 
    {
        for(int j=0; j<len; j++){ 
            if(arr[j]==i) // �Էµ� ���� �ݺ��������� ���� ���� ��
            sum+=dial(i); // dial�� ���� �����ش�. 
        }
    }
    printf("%d",sum);
    return 0;
}