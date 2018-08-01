#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m, n,i;
    cin >> m >> n;
    long long int c = m;
    long long int b = m;
    if(n>m) cout << n<<endl;
    else{

        for(i=1; i<=m; i++){

            c -= i;
            if(c <= 0)
                break ;
            c += n;
            if(c >= b)
                c = m;
        }
    cout << i << endl;
    }
    return 0;
}
