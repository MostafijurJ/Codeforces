
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
    int a[10],b[10],c[10],p[10];

    for(int i=0;i<4;i++){
        cin >> a[i]  >> b[i] >> c[i] >> p[i];
    }
    for(int i=0;i<4;i++){
        if(p[i]==1){
            if(a[i] || b[i] || c[i]){
                cout << "YES"<<endl;
                return 0;
            }
        if(a[(i+1)%4] || b[(i+2)%4] || c[(i+3)%4]){
           cout << "YES"<<endl;
           return 0;
           }
        }
    }
    cout <<"NO"<<endl;

   return 0;
}
