#include <stdio.h>
#include <stdlib.h>

int foo()
{
    int n;
    scanf("%d",&n);
    static int suma=0;
    suma+=n;
    printf("Suma:%d\n",suma);
    return n;
}

int main()
{
    int a=foo();
    int b=foo();
    int c=foo();
    return 0;
}
