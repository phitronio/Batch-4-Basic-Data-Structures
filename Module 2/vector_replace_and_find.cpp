#include<bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    // vector<int>v={1,2,2,4,3,5,1,2,4,5,3,2};
    // replace(v.begin(),v.end(),2,100);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    // find 
    vector<int>v={1,2,2,4,3,5,1,2,4,5,3,2};
    auto it = find(v.begin(),v.end(),100);
    if(it == v.end()) cout<<"Not found";
    else cout<<"Found";
    return 0;
}