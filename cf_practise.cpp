#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int s[27]={0};
    char c;
    int dd=n*m;
    for(int i=0; i<dd; i++){
        cin >> c;
        s[c-65]++;
    }
    if(s[2]||s[12]||s[24])
        cout << "#Color";
    else
        cout << "#Black&White\n";
    return 0;
}
