/*지민이는 자신의 저택에서 MN개의 단위 정사각형으로 나누어져 있는 M×N 크기의 보드를 찾았다. 어떤 정사각형은 검은색으로 칠해져 있고, 나머지는 흰색으로 칠해져 있다. 지민이는 이 보드를 잘라서 8×8 크기의 체스판으로 만들려고 한다.

체스판은 검은색과 흰색이 번갈아서 칠해져 있어야 한다. 구체적으로, 각 칸이 검은색과 흰색 중 하나로 색칠되어 있고, 변을 공유하는 두 개의 사각형은 다른 색으로 칠해져 있어야 한다. 따라서 이 정의를 따르면 체스판을 색칠하는 경우는 두 가지뿐이다. 하나는 맨 왼쪽 위 칸이 흰색인 경우, 하나는 검은색인 경우이다.

보드가 체스판처럼 칠해져 있다는 보장이 없어서, 지민이는 8×8 크기의 체스판으로 잘라낸 후에 몇 개의 정사각형을 다시 칠해야겠다고 생각했다. 당연히 8*8 크기는 아무데서나 골라도 된다. 지민이가 다시 칠해야 하는 정사각형의 최소 개수를 구하는 프로그램을 작성하시오.*/

#include<stdio.h>
#define small(x,y)x<y?x:y
int main()
{
    int a,b,count,count2,min=2500;
    char chess[50][51];
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++)
        scanf("%s",chess[i]);
    for(int i=0;i<a-7;i++) // ------------> brute 알고리즘 
        for(int j=0;j<b-7;j++) // 체스판은 8칸을 넘을 수 가 없다.
        {
            count=0,count2=0;
            for(int h=i;h<i+8;h++) 
                for(int k=j;k<j+8;k++)
                {
                    if((h+k)%2==0) // 가로 세로 합이 짝수이면 흰색
                    {
                        if(chess[h][k]=='W') // 흰색이면 -> count ++
                            count++;
                        else
                            count2++;                        
                    }
                    else
                    {
                        if(chess[h][k]=='B') // 짝수가 아닌 홀수 일떄에는 검은색
                            count++; // 검은색이면 -> count++
                        else
                            count2++;
                    }
                }
            min=small(min,count);
            min=small(min,count2);
        }
    printf("%d",min);
    return 0;
}
