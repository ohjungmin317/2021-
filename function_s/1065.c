/*
� ���� ���� X�� �� �ڸ��� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�. ���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�. N�� �־����� ��, 1���� ũ�ų� ����, 
N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */ 
// <�Լ��� �̿��ؼ� ������ Ǭ ���>
#include<stdio.h>

int han_num(int num){
    int a=0;
    int b=0;
    int c=0;
    int diff1=0;
    int diff2=0;
    int count=0;
    
    for(int i=1; i<=num; i++){
        a=i/100; // �Ѽ� ���ϴ� ���
        b=(i%100)/10;
        c=i%10;
        
        diff1=a-b;
        diff2=b-c;
        
        if(a == 0) // 1~99������ ���� ������ �Ѽ�
        {
            diff1 = diff2;
        }
        if(diff1==diff2)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int s;
    int count;
    
    scanf("%d",&s);
    
    count = han_num(s);
    
    printf("%d",count);
    
}

// �Լ��� �̿����� �ʰ� ������ Ǭ ���

/*
#include<stdio.h>

int main()
{
    int a=0,b=0,c=0;
    int count=0;
    int num;
    int diff1=0, diff2=0;
    
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        a = i/100;
        b = (i%100)/10;
        c = i%10;
        
        diff1 = a - b;
        diff2 = b - c;
        
        if(a==0){
            diff1 = diff2;
        }
        if(diff1==diff2){
            count++;
        }
        
    }
    printf("%d",count);
}
*/