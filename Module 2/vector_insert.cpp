#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>v2={100,101,102,103};
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}