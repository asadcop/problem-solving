#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, f;
    int n, i, j, k;
    while(cin >> n && n != -1)
    {
        cin >> s >> f;
        int a[26], b[26], c = 0, w = 0;

        for(i=0;i<26;i++)
            a[i] = b[i] = 0;

        for(i=0;i<s.size();i++)
        {
            int t = s[i] - 'a';
            if(a[t] == 0)
            {
                a[t] = 1;
                c++;
            }
        }

        for(i=0;i<f.size();i++)
        {
            if(w == 7 || c == 0)
                break;

            int t = f[i] - 'a';

            if(a[t] == 1)
            {
                a[t] = 0;
                b[t] = 1;
                c--;
            }

            else if(b[t] == 0)
            {
                b[t] = 1;
                w++;
            }
        }

        cout << "Round " << n << endl;
        if(c == 0)
            cout << "You win." << endl;
        else if(w == 7)
            cout << "You lose." << endl;
        else
            cout << "You chickened out." << endl;
    }

    return 0;
}
