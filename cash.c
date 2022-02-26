#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
    float n = get_float("Change owed: ");
    
    while(n<0)
    {
        n = get_float("Change owed: ");
    }
    n=round(n*100);
    int cnt=0;
    while(n>=25)
    {
        n-=25;
        cnt++;
    }
    while(n>=10)
    {
        n-=10;
        cnt++;
    }
    while(n>=5)
    {
        n-=5;
        cnt++;
    }
    while(n>0 && n>=1)
    {
        n-=1;
        cnt++;
    }
    printf("%d\n",cnt);
}
