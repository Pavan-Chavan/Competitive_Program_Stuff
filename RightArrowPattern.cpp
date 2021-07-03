// Code owner : PAVAN CHAVAN
// Title :  print the Right Arrow Pattern.
// date: 26/05/2021
#include <stdio.h>

int main()
{
    int i, j, n;



    scanf("%d", &n);


    for(i=1; i<n; i++)
    {

        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }


        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }


    for(i=1; i<=n; i++)
    {

        for(j=1; j<=(2*n - 2*i); j++)
        {
            printf(" ");
        }


        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}




