/*
이석원은 조규현과 백승환에게 상대편 마린(류재명)의 위치를 계산하라는 명령을 내렸다. 조규현과 백승환은 각각 자신의 터렛 위치에서 현재 적까지의 거리를 계산했다.

조규현의 좌표 (x1, y1)와 백승환의 좌표 (x2, y2)가 주어지고, 조규현이 계산한 류재명과의 거리 r1과 백승환이 계산한 류재명과의 거리 r2가 주어졌을 때, 류재명이 있을 수 있는 좌표의 수를 출력하는 프로그램을 작성하시오.*/
// -> 두 원의 교점의 개수를 구하는 문제 < 교점의 개수 구하는 공식 6가지 경우의 수 >

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x1,y1,r1; // 조규현 거리 위치 및 반지름 길이
    int x2,y2,r2; // 백승환 거리 위치 및 반지름 길이 
    double d=0;
    int T;
    
    scanf("%d",&T); // 전체 반복해야하는 횟수 
    
    for(int i=0; i<T; i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        
        d = sqrt(pow((x1-x2),2) + pow((y1-y2),2)); // sqrt -> 루트 (math.h 사용 해줘야 한다.) / pow 제곱(math.h 사용해줘야 한다.)
        
        if(r1+r2 < d) printf("0\n"); // 0인 경우에는 교점이 x
        else if(abs(r1-r2) > d) printf("0\n"); // 교점이 x 
        else if(d==0 && r1==r2) printf("-1\n"); // 교점이 무한대 == -1로 나타낸다.
        else if(r1+r2==d) printf("1\n"); // 교점이 1
        else if(abs(r1-r2)==d) printf("1\n"); // 교점이 1 + abs 절댓값으로 (stdlib.h)를 사용해줘야 한다.
        else printf("2\n"); // 그외 나머지는 2
        
    }
}