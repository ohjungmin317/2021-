/* ���� N�� �־����� ��, ���μ������ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=2; i<n; i++)
    {
        while(1)
        {
            if(n % i ==0) // ------------> ���μ����� ����
            {
                printf("%d\n",i);
                n/=i;
            }
            else break;
        }
    }
    if(n !=1) printf("%d\n",n); // ���μ����� �� �Ҽ��϶����� �̷��� ��Ÿ�� �ָ� �ȴ�.
    
    
    
}