#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
    char ch[1000000];
    char chh[1000000];
    int a,b;

    gets(ch);
    gets(chh);

    a = strlen(ch);
    b = strlen(chh);
    if(strcmp(ch,chh)==0)
    cout<<-1<<endl;
    else if(a>=b)
        cout<<a;
    else
        cout<<b;


    return 0;
}
