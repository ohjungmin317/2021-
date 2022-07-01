#include<stdio.h>
#include<stdlib.h>

/*qsort ����ϴ¹� :
void qsort(void *base, size_t nel, size_t width, int(*compare)(const void*, const void*)
-> parameter : (1) ������ �迭 (2) �迭�� �� element ���� (3) �迭 �� ���� ũ�� (4) �񱳸� ������ �Լ��� ������(const void)�� ����*/

typedef struct Sort
{   
    int x;
    int y;
}sort;

int compare (const void *a, const void *b)
{
    sort* p1 = (sort*)a;
    sort* p2 = (sort*)b;

    if(p1->x < p2->x) return -1;
    
    else if(p1->x > p2->x) return 1;

    else{
        if(p1->y < p2->y) 
        return -1;

        else if(p1->y > p2->y) 
        return 1;
        
    }
    return 0;

    return 0;
}

int main()
{  
    int n;
    scanf("%d",&n);
    sort *arr = (sort*)malloc(n*sizeof(sort)); // �������� �Ҵ����� 
    for(int i=0; i<n; i++) scanf("%d %d",&arr[i].x,&arr[i].y);
    qsort(arr, n, sizeof(arr[0]),compare); // segfault ���� �ߴ� �κ�  
    for(int i=0; i<n; i++) printf("%d %d\n",arr[i].x,arr[i].y);

    return 0;
}