/*N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
// -> O(nlogn) => �������� ������ �����ķ� ������ �ذ��ؾ��ϴµ� ���� �������� ������ �ذ���.

#include<stdio.h>
void merge(int data[], int p, int q, int r){ // ���� �������ִ� ���� 
    int i=p, j= q+1, k=p;
    int temp[2000001]; // �迭�� �� ������ �����ִ� �� 1000000 + 1000001 = 2000001
    while(i<=q&& j<=r){ // ���� ���ĵ� �������� �� �պ� 
        if(data[i]<=data[j]) temp[k++] = data[i++];
        else temp[k++] = data[j++];
    }
    while(i<=q) // ���� �ִ� ������ �ϰ� ����
    temp[k++] = data[i++];
    while(j<=r) // ���� �ִ� ������ �ϰ� ���� 
    temp[k++] = data[j++];
    k--;
    
    for(int a = p; a<=r; a++) data[a] = temp[a];
}

void mergeSort(int data[], int p, int r){ // �պ� ����
    int q;
    if(p<r){
        q =(p+r)/2; // �߰���ġ ����Ͽ� ����Ʈ �յ� ����
        mergeSort(data,p,q); // ���� �κ� ����Ʈ ����
        mergeSort(data, q+1, r); // ���� �κ� ����Ʈ ����
        merge(data,p,q,r); // �� �� ���ĵ� �κ� �պ��ϴ� ����
    }
}

int main()
{
    int data[2000001]={0,};
    int num;
    scanf("%d\n",&num);
    
    for(int i=0; i<num; i++){
        scanf("%d\n",&data[i]);
    }
    mergeSort(data,0,num-1); // �պ����� �����Լ� ȣ�� 
    
    for(int i=0; i<num; i++){
        printf("%d\n",data[i]); // ���ĵ� �� ȣ�� 
    }
}