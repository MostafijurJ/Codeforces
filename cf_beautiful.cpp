#include<stdio.h>
int main()
{
    int a,b,c,d,e,f=0;
    scanf("%d",&a);
    for(b=a+1;b<=9999;b++)
    {
        c=b/1000;
        d=(b/100)%10;
        e=(b/10)%10;
        f=b%10;
        if(c!=d && d!=e && e!=f && f!=c && c!=e && d!=f)
        {
            printf("%d",b);
            return 0;
        }
    }
    return 0;
}
