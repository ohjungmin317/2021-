/*�� ���� �־����� ��, �࿡ ������ ���簢���� ����� ���ؼ� �ʿ��� �� ��° ���� ã�� ���α׷��� �ۼ��Ͻÿ�.*/

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
   
   if(x1==x2) result_x=x3; // x��ǥ y��ǥ ���� ���� ���� �� ���� ã�� ������ ���� ���� ���ο� ��ǥ�� �����ϴ� ��� ���
   else if(x2==x3) result_x=x1;
   else result_x=x2;
   
   if(y1==y2) result_y=y3;
   else if(y2==y3) result_y=y1;
   else result_y=y2;
   
   printf("%d %d",result_x,result_y);
   
}