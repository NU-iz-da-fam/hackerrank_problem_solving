#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector <int> arr;
    arr.assign(n,0);
    for (int i = 0; i < n; i ++)
    {
        cin >> arr.at(i);
    }
    sort(arr.begin(), arr.end());
    int count = 1; int boss = arr.at(0);
    vector <int> maxnum;
    for (int i = 1; i < n; i ++)
    {
        if ((arr.at(i) - boss) > 1)
        {
            boss = arr.at(i);
            maxnum.push_back(count);
            count = 1;
        } else
        {
            count++;
            if (count == n)
            {
                maxnum.push_back(count);
            }
        } 
    }
    sort(maxnum.begin(), maxnum.end());
    cout << maxnum.at(maxnum.size()-1);
    
    return 0;
}
