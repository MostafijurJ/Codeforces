#include<stdio.h>

int main()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int m,d,axe,p;
    scanf("%d%d",&m,&d);

    axe = d-2+ a[m-1];

    p =  axe/7 +1;

    printf("%d\n",p);
    return 0;
}
