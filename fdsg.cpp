#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,v1,v2,t1,t2;
    while(cin >> s >> v1 >> v2 >> t1 >> t2){
        int x,y;

        x = (s*v1)+(2*t1);
        y = (s*v2)+(2*t2);

        ///cout  << x << " "<< y;

        if(x<y) cout << "First"<<endl;
        else if(x>y) cout << "Second"<<endl;
        else cout <<"Friendship"<<endl;
    }
    return 0;
}
