#include<stdio.h>
#include<math.h>

int main()
{
    int n,a,i;

    scanf("%d", &n);
     a = (int) sqrt(n);
        for(i=a; i>0;i--)
        {
            if(n%i==0)
                break;
        }
        printf("%d %d\n",i,n/i);
    return 0;
}
