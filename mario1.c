#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n = get_int("Height: ");
    while(n>8 ||n<1)
    {
        n = get_int("Height: ");
    }
    //printf("%d\n",n);
    for(int i=1;i<=n;i++)
    {
        int j;
        for( j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=j;k<=n;k++)
        printf("#");
        printf("\n");
    }

}
