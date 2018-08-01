#include<stdio.h>
#include<string.h>

int main()
{
    char kajol[100];
    int i, a,b;

    gets(kajol);
    b = strlen(kajol);

    for(i=0; i<a;i++){
        if(kajol[i]<97){
            kajol[i] = kajol[i]+32;
        }
    }
    puts(kajol);
    return 0;
}
