/*N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
#include<stdio.h>
int main()
{
    int arr[10001] = {0,};
    
    int n,num;
    
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){ // �����ؾߵǴ� �� �Է�
        scanf("%d",&num);
        arr[num]++; // ������ ���� -> ī���� ���� 
    }
    
    for(int i=0; i<10001; i++){
        if(arr[i]==0) continue;
        
        for(int j=0; j<arr[i]; j++)
            printf("%d\n",i);
    }
}