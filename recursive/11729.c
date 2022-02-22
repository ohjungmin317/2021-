/*세 개의 장대가 있고 첫 번째 장대에는 반경이 서로 다른 n개의 원판이 쌓여 있다. 각 원판은 반경이 큰 순서대로 쌓여있다. 이제 수도승들이 다음 규칙에 따라 첫 번째 장대에서 세 번째 장대로 옮기려 한다.

한 번에 한 개의 원판만을 다른 탑으로 옮길 수 있다.
쌓아 놓은 원판은 항상 위의 것이 아래의 것보다 작아야 한다.
이 작업을 수행하는데 필요한 이동 순서를 출력하는 프로그램을 작성하라. 단, 이동 횟수는 최소가 되어야 한다.

아래 그림은 원판이 5개인 경우의 예시이다. */

#include<stdio.h>
int hanoi(int n){ // 하노이판 최소 이동 횟수를 구하는 공식 
    
    if(n==1) return 1; // n판이 1일 때에는 1로 return 
    else return 1 + hanoi(n-1) * 2; // 그 외 나머지 n판일때에는 위 하노이 공식으로 return -> (n-1 개의 원판이 있을 때 최소 이동 횟수) * 2 + 1
    
}

void hanoi_pattern(int num, int a, int b, int c){ // 하노이 판 최소 이동 루트를 구하는 공식 
    
    if(num==1) printf("%d %d\n",a,c); // 1일 때에는 그대로 출력
    else {
        hanoi_pattern(num-1,a,c,b); // 2,3을 바꾸어서 출력
        printf("%d %d\n",a,c); // 출력된수 1,3
        hanoi_pattern(num-1,b,a,c); // 다시 1,2를 바꾸어서 출력 
    }
}

int main()
{
    int n=0;
    
    scanf("%d",&n);
    printf("%d\n",hanoi(n)); // 하노이탑 최소 이동 횟수 구하는 함수
    
    hanoi_pattern(n,1,2,3); // 하노이탑 최소 이동루트를 구하는 함수 
    
}