
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=1;
    if(n%2==0){
            for( i=1;i<=n/2;i++)
         if(i%2==0) cout << "aa";
      else cout << "bb";
    }
    else{
        for( i=1;i<=n/2;i++){
            if(i%2==0)
                cout <<"aa";
           else cout << "bb";
        }
        if(i%2==0)
            cout <<"a";
        else
            cout << "b";
    }
    cout << endl;

    return 0;
}
