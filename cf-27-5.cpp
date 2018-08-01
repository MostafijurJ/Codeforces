/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ll m,n;
    int r[10001];
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> r[i];
    int rr[100000];
    for(int i=0;i<n;i++){
        rr[i] = r[i];
    }

        for(int i=0;i<m;i++){
           ll a,b,x;
            cin >> a >> b >> x;
            int p = rr[x-1];
            sort(rr+a-1, rr+b);
                int pp = rr[x-1];

            if(p==pp)
                cout << "Yes"<<endl;
            else
                cout << "No"<<endl;

                for(int i=0;i<n;i++){
                   rr[i] = r[i];
            }

            p=0;
            pp=0;
        }
   return 0;
}

