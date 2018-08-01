#include<stdio.h>
#include<string.h>

int main()
{
    int i ;
    char kajol[10000];

    scanf("%s", kajol);

    for(i=0; i<= strlen(kajol); i++)
    {
        if(kajol[i]=='A' || kajol[i]=='O'||kajol[i]=='Y'||kajol[i]=='E'||kajol[i]=='U'||kajol[i]=='I')
            continue ;

        else
            kajol [i] = kajol[i]+32;


    printf(".%c", kajol[i]);
    }

    return 0;

}
