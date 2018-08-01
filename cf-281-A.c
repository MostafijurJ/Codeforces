#include<stdio.h>
int main()
{
    char a[1000];
    int i,x,y,z;
    scanf("%s", a);

    if(a[0] > 96) //&& a[0]<123)
    {
        a[0] = a[0]-32;
    }

    printf("%s\n",a);
    return 0;
}
