/*
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�. */

#include<stdio.h>
int main()
{
    int a;
    int x;
    int arr[1000]={0};
    int sum;
    double avg;
    double avg_std;
    
    scanf("%d",&a);
    
    for(int i=0; i<a; i++)
    {
        x=0;
        sum=0;
        avg=0;
        avg_std=0;
        
        scanf("%d",&x);
        for(int j=0; j<x; j++)
        {
            scanf("%d",&arr[j]);
            sum = sum + arr[j];
        }
        avg = sum / x;
        for(int j=0; j<x; j++)
        {
            if(arr[j]>avg)
            avg_std+=1;
        }
        printf("%.3f%%\n",(double)(avg_std *100 /x));
        printf("�ȳ��ϼ���");
    }
    return 0;
}