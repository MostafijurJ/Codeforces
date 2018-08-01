
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
    string k;
    int c=0, b=0;
        cin >> k;
        for(int i=0; i<k.size();i++){
            if(k[i]>= 65 && k[i]<=90)
                c++;
            else
                b++;
        }
       /// cout << a << " "<<b <<endl;
        if(c>b){
            for(int i=0; i<k.size();i++){
                if(k[i]>=97 && k[i]<=122)
                  k[i]= k[i]-32;
            }
        }
        else{
            for(int i=0; i<k.size();i++){
            if(k[i]>= 65 && k[i]<=90)
                k[i]= k[i]+32;
            }
        }

        cout << k <<endl;

    return 0;
}
