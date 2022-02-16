/*과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다. 주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하시오.*/

#include <stdio.h>

int main() {
    
    long a, b ,c; // int의 범위가 커질 수 있기 때문에 변수 정의할때 long으로 정의해준다.
    
    while(1)
    {
        long sum1,sum2,sum3;
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a==0 && b==0 && c==0) break; // 0 0 0이 입력이 되었을 때 while문 반복 종료
        
        sum1 = a * a, sum2 = b * b, sum3 = c * c; // 원래 피타고라스 정리 => 빗변 제곱 = 변1 제곱 + 변2 제곱 / 각 변을 제곱해준다.
        
        if(sum3 == sum1 + sum2 || sum2 == sum1 + sum3 || sum1 == sum2 + sum3) // 가장 큰 변 (빗변) 에서 나머지 두 변을 더한 값이 같으면 피타고라스 정리가 성립이 되어 직각삼각형 
        printf("right\n");
        else printf("wrong\n"); // 그 외 나머지 아닌 것은 직각 삼각형이 아니다.
    }
}