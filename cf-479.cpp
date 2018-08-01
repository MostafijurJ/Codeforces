#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

        cin >> a >> b >> c;

        int d,e,f,g,h;

        d = a+(b*c);
          e = (b+c)*a;
            f = a*b*c;
                g = (a+b)*c;
                    h= a+b+c;
                int p= max(d,e);
                int q = max(f,g);
                int m = max(p,q);
                int r = max(m,h);

            cout << r <<endl;
    return 0;
}
