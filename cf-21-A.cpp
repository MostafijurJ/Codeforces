

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int n,k;
    cin >> n >> k;
    int a;
    int sum =0;
    for(int i=0;i<n;i++){
        cin >> a;
        sum += a;
    }

    float pp = (float)(k-0.5);
    int x=0;

    for(; ;){
        float m =(float)sum/n;

            if(m>=pp)
                break;
            sum += k;
            n++;
                x++;


    }
    cout << x <<endl;

   return 0;
}
