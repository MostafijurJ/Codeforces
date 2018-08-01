
 /*
 ---------*********--------
   Mostafijur Rahman Kajol
        CSE, JUST
      ----*****---- */

#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;

    cin >>a>>b>>c>>d;

    e = a^b;
    f = c^d;
    g = b & c;
    h = a ^ d;
    i = g^h;
    j = e & f;
    k = i ^ j;

    cout << k <<endl;


    return 0;
}
