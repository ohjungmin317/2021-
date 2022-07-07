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
/* 산술평균 */
/* 평소에 나누기 하는 방식이 산술평균 -> 반올림을 해주면 된다. */
int arith(int *list, int n){

    double sum =0;
    for(int i=0; i<n; i++){
        sum+=(list[i]);
    }

    return round(sum/n); // <math.h>  반올림 함수 
    /* <math.h>에 포함된 올림 / 반올림 / 내림 함수 사용*/
    /* 올림 ceil(double_X)*/
    /* 반올림 round(double_X)*/
    /* 내림 floor(double_X)*/
}
/* 중앙값 */
/* 중앙값에서는 해당 값에 대한 sort가 필요한 상황이다. */

/* 중앙값에서는 홀수 개인 경우와 짝수 개인 경우의 수가 다르다 */
/* -> 홀수 인 경우 [N/2] | 짝수 인 경우 [(N+1)/2 -1] (cf, 배열은 0부터 시작을 하기 때문에)*/
int median(int *list, int n){

    double sum =0;

    /* segemnt fault 오류 뜨는 부분 */
    // if(n/2==0) sum = (list[n/2]+ list[n/2+1]) /2;
    
    // else sum = list[(n+1)/2];

    if (n == 1) // n이 1개일 경우
		return list[0];
	else // 그외 나머지 홀수개인 경우 
		return list[(n + 1) / 2 - 1];
}
/* 범위 값*/
/* 최대값에서 최솟값을 빼주면 된다. (단 정렬이 되어 있는 상태에서)*/
int range(int *list, int n){

    int max = list[n-1];
    int min = list[0];

    return max - min;
}
/* 최빈값 참고 : https://sedangdang.tistory.com/19 */
/* 최반값은 도수가 가장 큰 값 -> 최빈값이 여러개 일 경우에는 수에서 두번째로 작은 수를 출력한다. */
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
    return idx - 4000; // 최빈값이 여러개 일때 두번째로 작은 값 출력을 해주기 
    
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