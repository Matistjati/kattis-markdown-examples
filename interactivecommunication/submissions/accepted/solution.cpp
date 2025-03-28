#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    string type;
    cin >> type;
    if (type == "encode")
    {
        string goal;
        cin >> goal;
        for (auto c : goal)
        {
            char forbid;
            cin >> forbid;
            if (forbid == '1' || forbid == '2')
            {
                if (c=='0') cout << '0';
                else cout << '3';
            }
            else
            {
                if (c=='0') cout << "1";
                else cout << "2";
            }
            cout << endl;
        }
    }
    else
    {
        string encoded;
        cin >> encoded;
        string ans;
        for (char c : encoded)
        {
            if (c == '0') ans += '0';
            else if (c == '1') ans += '0';
            else if (c == '2') ans += '1';
            else if (c == '3') ans += '1';
        }
        cout << ans << endl;
    }
}