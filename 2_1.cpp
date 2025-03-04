#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Number of input symbols :";
    cin >> n;

    cout << "Input Symbol :";
    vector<char> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Number of state :";
    int b;
    cin >> b;

    cout << "Inital state : ";
    int c;
    cin >> c;
    c--;

    cout << "Number of accepting states : ";
    int d;
    cin >> d;

    vector<int> e(d);
    cout << "Accepting state : ";
    for (int i = 0; i < d; i++)
    {
        cin >> e[i];
        e[i]--;
    }

    vector<vector<int>> addjust(b, vector<int>(n));
    cout << "Transition table :" << endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i + 1 << " to " << a[j] << "-> : ";
            cin >> addjust[i][j];
            addjust[i][j]--;
        }
    }
    string s;
    cin >> s;

    for (auto i : s)
    {
        c = addjust[c][i - '0'];
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