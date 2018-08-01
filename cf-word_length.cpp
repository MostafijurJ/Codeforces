#include<stdio.h>
#include<string.h>

int main()
{
    int i,p,q;
    char kajol[1000];

    scanf("%d",&q);
    for(i=0; i<= q; i++)
    {
        gets(kajol);
        p = strlen(kajol);
        if(p>10)
            printf("%c%d%c\n", kajol[0],p-2,kajol[p-1]);
        else
           puts(kajol);
    }
    return 0;
}
