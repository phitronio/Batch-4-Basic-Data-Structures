#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 30, 30, 70};
    // list<int> newList = {100, 200, 300};
    // vector<int> v = {60, 70, 80};
    // myList.pop_back();
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(), 3), 100);
    // myList.erase(next(myList.begin(), 2));
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end());
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    // replace(myList.begin(), myList.end(), 30, 100);

    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 60);
    if (it == myList.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}