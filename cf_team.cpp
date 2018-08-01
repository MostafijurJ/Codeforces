#include<stdio.h>

int main()
{
    int a,i,x[5],m,n=0;
    scanf("%d",&a);
    while(a--)
    {
        m=0;

        for(i=1; i<=3; i++)
        {
            scanf("%d",&x[i]);
            m += x[i];
        }

        if(m>1)
            n++;
    }
    printf("%d\n",n);
    return 0;
}
