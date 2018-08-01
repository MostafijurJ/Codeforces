#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,m=0;
    string k;
        cin >> a >> k;

         for(int i=0; i<a;i++){
            if(k[i]== k[i+1])m++;

         }

         cout << m<<endl;
    return 0;
}
