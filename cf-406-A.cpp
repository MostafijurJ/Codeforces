#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;

    cin >> a >> b >> c >> d;
    if(a<c && b<d)
        cout << -1<<endl;
    int x[100],y[100];
    for(int i=0; i<100; i++){
                x[i] = b + a*i;
    }
    for(int i=0; i<100; i++){
                y[i] = d + c*i;
    }
    int p=0;
    for(int i=0; i<100; i++)
    {
        if(x[p] == y[i])
    cout << x[i] << " "<<y[i]<< " ";}
    p++;


    return 0;
}
