#include<stdio.h>
#include<string.h>
main()
{
    char a[101];
    int i;
    gets(a);
    strlwr(a);
    for(i=0; a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y');
        else
        printf(".%c",a[i]);

    }
    return 0;
}
