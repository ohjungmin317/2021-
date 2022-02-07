/*예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, ?, nj, a, k)로 이루어져 있다. 단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

d?는 무조건 하나의 알파벳으로 쓰이고, d와 ?가 분리된 것으로 보지 않는다. lj와 nj도 마찬가지이다. 위 목록에 없는 알파벳은 한 글자씩 센다. */

#include<stdio.h>
#include<string.h>

int main() 
{
    char arr[101]; // 조건에 첫 줄에 100개의 단어가 나온다
    scanf("%s",arr);
    
    int len = strlen(arr);
    int sum = strlen(arr);
    
    for(int i=0; i<len; i++){ // 크로아티어인 모든 경우의 수를 if 와 else if를 이용해서 사용
        if(arr[i] == 'c' || arr[i]== 's' || arr[i]== 'z'){ // 'c' 's' 'z'가 나오고
            if(arr[i+1] == '=' || arr[i+1] == '-') // '=' '-'가 나오게 되면 크로아티어 언어로 판단하고 sum에서 차감
            sum --;
        }
        else if(arr[i] == 'n' || arr[i] == 'l'){ // 'n' 'l'가 나오게 되고
            if(arr[i+1]=='j') //  그다음 언어가 'j' 이면 크로아티어 언어이기에 sum에서 감소 
            sum--;
        }
        else if(arr[i]=='d'){ // 문자에 'd'가 나오게 되고
            if(arr[i+1]=='-') // 그 다음 문자에 '-'가 나오게 되면 sum에서 차감
            sum--;
            else if(arr[i+1]=='z' && arr[i+2]=='=') // 'z'가 있거나 '='가 있을 시에는 sum에서 차감 
            sum--;
        }
    }
    printf("%d\n",sum);
}