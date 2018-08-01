/*

        Mostafijur Rahman Kajol
        JUST, CSE'15
                             */
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    char kk[1000];

    cin >> n >> k;

    for(int i=0;i<n;i++) cin >> kk[i];
    int giv;
    giv = n/k;

    if(k==1){
        for(int i=1;i<n;i++){
            if(kk[0]==kk[i]){
                cout <<"NO"<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(kk[i]==kk[i+k] || (kk[i]==(kk[i+k]+32)))
        {
            cout <<"NO"<<endl;
            return 0;
        }
    }
    cout <<"YES"<<endl;
    return 0;
}

