/* �־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#include<stdio.h>
int main()
{
    int a,i;
    int num,cnt=0;
    
    
    scanf("%d",&a);
    
    while(a--) { // a�� ������ ���� �ݺ��ϴ� Ƚ���� ��������.
        scanf("%d",&num);
        
        for(i=2; i<num; i++) // �Ҽ��̱⿡ 1�� x -> 2���� �ݺ��� ���� 
        {
            if(num%i==0) break;
            
        }
        if(i==num) cnt++;
    }
    printf("%d",cnt);
}