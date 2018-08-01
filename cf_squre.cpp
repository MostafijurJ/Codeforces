#include<stdio.h>
int main ()
{
    int n,m ,a;
    long long unsigned int p;
    scanf("%d%d%d",&n,&m,&a);

    p=((n+a-1)/a)*((m+a-1)/a);
    printf("%I64d", p);
return 0;
}

