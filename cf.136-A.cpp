#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000];
    int i, n, p;

    cin >> n;

    for(i=1; i<=n ; i++){
        cin >> p;
        a[p]= i;
    }

    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";

    }
    return 0;
}
