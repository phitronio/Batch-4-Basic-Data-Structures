#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }
    cout << s.count(100) << endl; // O(logN)
    if (s.count(1000))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    return 0;
}