#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char kajol[101],nupur[101];

    gets(kajol);
    gets(nupur);

    strrev(kajol);

    if(strcmp(kajol,nupur)==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
