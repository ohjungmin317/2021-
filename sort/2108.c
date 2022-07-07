#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int comapre(const void *a, const void *b){

    int *p1 = (int*)a;
    int *p2 = (int*)b;

    if(*p1 < *p2) return -1;
    else if(*p1 > *p2) return 1;
    else return 0;
}
/* ������ */
/* ��ҿ� ������ �ϴ� ����� ������ -> �ݿø��� ���ָ� �ȴ�. */
int arith(int *list, int n){

    double sum =0;
    for(int i=0; i<n; i++){
        sum+=(list[i]);
    }

    return round(sum/n); // <math.h>  �ݿø� �Լ� 
    /* <math.h>�� ���Ե� �ø� / �ݿø� / ���� �Լ� ���*/
    /* �ø� ceil(double_X)*/
    /* �ݿø� round(double_X)*/
    /* ���� floor(double_X)*/
}
/* �߾Ӱ� */
/* �߾Ӱ������� �ش� ���� ���� sort�� �ʿ��� ��Ȳ�̴�. */

/* �߾Ӱ������� Ȧ�� ���� ���� ¦�� ���� ����� ���� �ٸ��� */
/* -> Ȧ�� �� ��� [N/2] | ¦�� �� ��� [(N+1)/2 -1] (cf, �迭�� 0���� ������ �ϱ� ������)*/
int median(int *list, int n){

    double sum =0;

    /* segemnt fault ���� �ߴ� �κ� */
    // if(n/2==0) sum = (list[n/2]+ list[n/2+1]) /2;
    
    // else sum = list[(n+1)/2];

    if (n == 1) // n�� 1���� ���
		return list[0];
	else // �׿� ������ Ȧ������ ��� 
		return list[(n + 1) / 2 - 1];
}
/* ���� ��*/
/* �ִ밪���� �ּڰ��� ���ָ� �ȴ�. (�� ������ �Ǿ� �ִ� ���¿���)*/
int range(int *list, int n){

    int max = list[n-1];
    int min = list[0];

    return max - min;
}
/* �ֺ� ���� : https://sedangdang.tistory.com/19 */
/* �ֹݰ��� ������ ���� ū �� -> �ֺ��� ������ �� ��쿡�� ������ �ι�°�� ���� ���� ����Ѵ�. */
int mode(int *list, int n){

    int ar[8001] = { 0 };
    int i,idx,max =0 , cnt =0;

    for(i=0; i<n; i++){
        idx = list[i] + 4000;
        ar[idx] += 1;

        if(ar[idx] > max) max = ar[idx];
    }

    for(i=0, idx =0; i< 8001; i++)
    {
        if(ar[i] == 0) continue;
        if(ar[i]== max)
        {
            if(cnt == 0)
            {
                idx = i;
                cnt += 1;
            }
            else if (cnt == 1)
            {
                idx = i;
                break;
            }
        }
    }
    return idx - 4000; // �ֺ��� ������ �϶� �ι�°�� ���� �� ����� ���ֱ� 
    
}

int main()
{
    int n;

    scanf("%d",&n);

    int *list = (int*)malloc(sizeof(int)*n);

    for(int i=0; i<n; i++){
        scanf(" %d",&list[i]);
    }
    qsort(list,n,sizeof(int),comapre);

    printf("%d\n",arith(list, n));
    printf("%d\n",median(list, n));
    printf("%d\n",mode(list,n));
    printf("%d\n",range(list,n));

}