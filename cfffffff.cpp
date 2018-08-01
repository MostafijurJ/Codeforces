#include<bits/stdc++.h>

using namespace std;
bool mark[1000010];

void simpleSieve(int limi)
{
    memset(mark, true, sizeof(mark));
    for (int p=2; p*p<limi; p++)
    {
        if (mark[p] == true)
        {
            for (int i=p*2; i<limi; i+=p)
                mark[i] = false;
        }
    }
}
int main()
{
    simpleSieve(1000010);
    int n;
    cin >> n;
    for(int i=1; i<=1000; i++){
        if(mark[n*i+1]);
        else{
            cout << i << endl;
            break;
        }
    }
    return 0;
}
