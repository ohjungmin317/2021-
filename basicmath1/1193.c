#include <stdio.h>

int main() {
    int a;
    int k=1;
    
    scanf("%d" , &a);
    
    while(1) // ������ ã�� �ڵ� 
    {
        if((k-1)*(k)/2 < a && a <= (k)*(k+1)/2)
        {
            break;
        }
        k++;
    }
    
    if(k%2 !=0) // Ȧ�� �� ��
    {
        int sum = k*(k+1)/2;
        printf("%d",sum-a+1); // Ȧ����° ���ο��� �μ����� �������� ���鼭 / �������� ���� + ���������� -
        printf("/");
        printf("%d",k-(sum-a)); 
        
    }
    else // ¦�� �� ��
    {
        int sum = k*(k+1)/2;
        printf("%d",k-(sum-a)); // ¦������ ���ο��� �μ����� ���������� ���鼭 / �������� ���� - ������ + 
        printf("/");
        printf("%d",sum-a+1);
    }
}