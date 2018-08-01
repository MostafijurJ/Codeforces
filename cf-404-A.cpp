#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long  int sum =0;
    int k;
    string m;
    cin >> k;
    while(k--)
    {
        cin >> m;
    if(m == "Tetrahedron")
        sum += 4;
        else if(m =="Cube")
           sum +=6;
        else if(m=="Octahedron")
                sum += 8;
        else if(m== "Dodecahedron")
        sum  += 12;
        else if(m=="Icosahedron")
        sum  += 20;
    }
    cout << sum <<endl;

    return 0;
}
