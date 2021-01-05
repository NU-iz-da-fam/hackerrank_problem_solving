#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n1 = 0;
    int n2 = 0;
    int num = 0;
    int num2 = 0;
    int result = 0;
    cin >> n1 >> n2;
    vector <int> arr1;
    vector <int> arr2;
    arr1.assign(n1,0);
    arr2.assign(n2,0);
    for (int i = 0; i < n1; i ++)
    {
        cin >> arr1.at(i);
    }
    for (int i = 0; i < n2; i ++)
    {
        cin >> arr2.at(i);
    }
    
    for (int i = arr1.at(n1 -1); i <= arr2.at(0); i++)
    {
        for (int j = 0; j < n1; j ++)
        {
            if ((i % arr1.at(j)) == 0)  
            {
                num++;  
            } 
        }
        if (num == n1)
        {
            for (int j = 0; j < n2; j ++)
            {
                if ( (arr2.at(j) % i)  == 0)  
                {
                    num2++;   
                }   
            }
        }
        if (num2 == n2)
        {
            result++;
        }
        num =0;
        num2 =0;
    }
    cout << result << "\n";
}

