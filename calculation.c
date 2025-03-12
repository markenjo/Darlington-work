#include <stdio.h>
#include <stdlib.h>

int main(){

char n[50];
printf("Please enter domestic animals");
scanf("%s",&n);

char x[40];
printf("Please enter wild animals");
scanf("%s",&x);

char m[80]="n+x";
printf("The group of n and x animals is %s,%s",n,x);

    return 0;
}
