#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    char arr[100]={0, };
    int cont;
    int score;
    int len;
    
    scanf("%d",&a);
    
    for(int i=0; i<a; i++)
    {
        scanf("%s",&arr);
        len = strlen(arr);
        
        for(int j=0; j<len; j++){
            if(arr[j]=='X')
            {
                cont =0;
                score +=cont;
            }
            else if(arr[j]=='O')
            {
                cont++;
                score+=cont;
            }
        }
        printf("%d\n",score);
            score =0;
            cont =0;
    }
}