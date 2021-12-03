#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        int l = 0;
        int c = 0;
        int co = 0;
        int co1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'X')
            {
                if (s[i - 1] == '.')
                    co1--;
                if (s[i + 1] == '.')
                    i++;
                c++;
                if (co1 > l)
                    l = co1;
                co1 = 0;
            }
            else if (c == 0 && s[i + 1] != 'X')
                co++;
            else if (c >= 1)
                co1++;
        }
        l = (l / 2) + (l % 2);
        // cout<<l<<" "<<co<<" "<<co1<<endl;
        cout << max(l, max(co, co1)) << endl;
    }
    return 0;
}