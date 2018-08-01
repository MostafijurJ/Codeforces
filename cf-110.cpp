#include<bits/stdc++.h>

using namespace std;

int main()
{
    string k;
    cin >> k;
        long long m=0;
        long long ll=k.size();

        if((k[ll-1]=='7') && (ll==1)){
                cout << "NO"<<endl;
            return 0;
            }
       else if((k[ll-1]=='4') && (ll==1)){
                cout <<"NO"<<endl;
            return 0;
            }
        else{
        for(int i=0; i<ll;i++){
            k[i] = k[i]-48;

            if(k[i]== 4 || k[i]==7)
                m++;
            }
            }
        if(m==ll)
            cout<<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    return 0;
}
