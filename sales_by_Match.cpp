#include <bits/stdc++.h>

using namespace std;
#include <vector>

int main ()
{
    int n = 0;
    int count = 0; 
    int mid = 0; 
    int pairs = 0;
    vector<int> socks;
    cin >> n;
    socks.assign(n,0);
    
    for (int i = 0; i < n; i ++)
    {
        cin >> socks.at(i);
    }
    sort(socks.begin(), socks.end());
    mid = socks.at(0);
    
    for (int i = 0; i < n; i ++)
    {
        if (mid == socks.at(i))
        {
            count++;

        } else 
        {
            pairs = pairs + count/2;
            mid = socks.at(i);
            count = 1;
        }
    }
    pairs = pairs + count/2;
    
    cout << pairs;
    return 0;
    
}
