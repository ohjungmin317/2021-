/*N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#include<stdio.h>
int main()
{
    int num;
    int arr[1000]={0,}; // �迭 �ʱ�ȭ
    int temp;
    scanf("%d",&num); // ������ ���� ���
    
    for(int i=0; i<num; i++){
        scanf("%d\n",&arr[i]);
        
    }
    
    for(int i=0; i<num; i++){
        for(int j=0; j<num-1; j++){
            if(arr[j]>arr[j+1]){ // �������� ����
            
            temp = arr[j+1]; // �������� temp�� �ӽð� �����س��� ���� ���� 
            arr[j+1] = arr[j];
            arr[j] = temp;
            }
        }
    }
    
    for(int i=0; i<num; i++){
        printf("%d\n",arr[i]); // ���ĵ� �迭�� ��� 
    }
}