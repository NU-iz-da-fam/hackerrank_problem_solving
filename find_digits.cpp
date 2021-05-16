#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
// function 
int findDigits(int n) {
    int result = 0;
    bool condition = true;
    int reference = n;
    
    while (condition){
        int temp = n % 10;
        if ( (temp !=0 ) && (reference % temp == 0)){
            result ++;
        } 
        if (n / 10 == 0){
            condition = false;
        }
        n = n / 10;
    }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
