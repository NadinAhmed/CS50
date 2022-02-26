#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n = get_int("Height: ");
    while(n>8 ||n<1)
    {
        n = get_int("Height: ");
    }
    //rows number
    for(int i=1;i<=n;i++)
    {
        //columns
        for(int k=1;k<=n;k++)
        {
            if(k<=n-i)
            printf(" ");
            else
            printf("#");
        }
        printf("  ");
        for(int k=1;k<=n;k++)
        {
            if(k<=i)
            printf("#");
            else
            {
                if(k!=n)
               printf("");
            }
        }
        printf("\n");
    }
}
