/*세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.*/

#include<stdio.h>
int main()
{
   int x1,y1;
   int x2,y2;
   int x3,y3;
   int result_x,result_y;
   
   scanf("%d %d",&x1,&y1);
   scanf("%d %d",&x2,&y2);
   scanf("%d %d",&x3,&y3);
   
   if(x1==x2) result_x=x3; // x좌표 y좌표 각각 값이 같은 두 값을 찾아 나머지 한의 값을 새로운 좌표에 대입하는 방법 사용
   else if(x2==x3) result_x=x1;
   else result_x=x2;
   
   if(y1==y2) result_y=y3;
   else if(y2==y3) result_y=y1;
   else result_y=y2;
   
   printf("%d %d",result_x,result_y);
   
}