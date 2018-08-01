#include<bits/stdc++.h>
using namespace std;

int main()
{
    string k;

    cin >> k;
    int p=0;

        for(int i=0; i< k.size(); i++){
            if(k[i]=='H' || k[i]== 'Q' || k[i] == '9'){
                p=1;
                }
        }
            if(p==1)
                cout << "YES"<<endl;

                    else{
                        cout << "NO"<<endl;
                      }

    return 0;
}
