#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[40];
     printf("Please enter domestic animals:");
     scanf("%s",&n);

     char m[30];
     printf("Please enter wild animals:");
     scanf("%s",&m);

     char k[70]="n+m";
     printf("The group of n and m is %s,%s",n,m);

    return 0;
}
