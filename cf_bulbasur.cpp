#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char,int> mymap;
    for(char a='A'; a<='Z'; a++)
        mymap[a]=0;
    for(char a='a'; a<='z'; a++)
        mymap[a]=0;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        mymap[s[i]]++;
    }
    mymap['b']=mymap['b']/1;
    mymap['a']=mymap['a']/2;
    mymap['u']=mymap['u']/2;
    int mini = min(mymap['B'],min(mymap['b'],min(mymap['a'],min(mymap['u'],min(mymap['l'],min(mymap['s'],mymap['r']))))));
    if(mymap['B']!=0&&mymap['b']&&mymap['a']!=0&&mymap['u']&&mymap['l']!=0&&mymap['s']&&mymap['r']!=0)
        cout << mini;
    else
        cout << 0;
    return 0;
}
