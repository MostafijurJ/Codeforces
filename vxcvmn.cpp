#include<bits/stdc++.h>

using namespace std;

int main()
{
    string k;
    cin >> k;
    int m=k.size()-1;
    int ck=0;
    for(int i=0; i<k.size()/2; i++,m--){
        if(k[i]!=k[m])ck++;
    }
    if(ck==1){
        cout << "YES\n";
        return 0;
    }
    if(ck==0&&k.size()%2==1){
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}

