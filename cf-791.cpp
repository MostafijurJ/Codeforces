#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,p=0;

    cin >> a >> b;
    while(1)
    {
        if(a > b){
           cout << p <<endl;
           break ;
        }
        a = a*3;
        b = b*2;
        p++;

    }

    return 0;
}
