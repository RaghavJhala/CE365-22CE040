#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Number of input symbols :";
    cin >> n;

    // cout << "Input Symbol :";
    vector<char> a;
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        a.push_back(ch);
    }
    for (char ch = '0'; ch <= '9'; ++ch) {
        a.push_back(ch);
    }

    int b;
    cout << "Number of state :";
    cin >> b;

    int c;
    cout << "Inital state : ";
    cin >> c;
    c--;

    int d;
    cout << "Number of accepting states : ";
    cin >> d;

    vector<int> e(d);
    cout << "Accepting state : ";
    for (int i = 0; i < d; i++)
    {
        cin >> e[i];
        e[i]--;
    }

    vector<vector<int>> addjust(b, vector<int>(n));
    for (int i = 0; i < 26; ++i) { 
        addjust[0][i] = 1; 
    }
    for (int i = 26; i < 36; ++i) { 
        addjust[0][i] = 2; 
    }


     for (int i = 0; i < 26; ++i) { 
        addjust[1][i] = 1; 
    }
    for (int i = 26; i < 36; ++i) { 
        addjust[1][i] = 1; 
    }


    for (int i = 0; i < 36; ++i) { 
        addjust[2][i] = 2; 
    }
    string s;
    cin >> s;

    for (auto i : s)
    {
        if (!isdigit(i))
        {
            c = addjust[c][i - a[0]];
        }
        else
        {
            c = addjust[c][i - '0' + 26];
        }
    }

    bool flag = false;

    for (int i = 0; i < d; i++)
    {
        if (c == e[i])
        {
            cout << "accepted";
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "not accepted";
    }
    return 0;
}