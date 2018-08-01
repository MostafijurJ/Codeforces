#include<stdio.h>
int main ()
{
    long long int n,m ,a;
    long long  int p;
    scanf("%lld%lld%lld",&n,&m,&a);

    p=((n+a-1)/a)*((m+a-1)/a);
    printf("%lld", p);
return 0;
}
