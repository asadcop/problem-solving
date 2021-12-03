#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, i;
  cin >> t;
  string s1, s2;
  int d1 = 0, m1 = 0, y1 = 0;
  int d2 = 30, m2 = 12, y2 = 9999;

  while (t--)
  {
    string s;
    int d, m, y;
    cin >> s >> d >> m >> y;
    if (y > y1)
    {
      s1 = s;
      d1 = d;
      m1 = m;
      y1 = y;
    }
    else if (y < y2)
    {
      s2 = s;
      d2 = d;
      m2 = m;
      y2 = y;
    }
    else if (y == y1)
    {

      if (m > m1)
      {
        s1 = s;
        d1 = d;
        m1 = m;
        y1 = y;
      }
      else if (m == m1)
      {
        if (d > d1)
        {
          s1 = s;
          d1 = d;
          m1 = m;
          y1 = y;
        }
      }
      }
      else if (y == y2)
      {
        if (m < m2)
        {
          s2 = s;
          d2 = d;
          m2 = m;
          y2 = y;
        }
        else if (m == m2)
        {
          if (d < d2)
          {
            s2 = s;
            d2 = d;
            m2 = m;
            y2 = y;
          }
        }
      }
    
  }
  if (y1 > y2)
    cout << s1 << endl
         << s2 << endl;
  else if (y2 > y1)
    cout << s2 << endl
         << s1 << endl;
  else if (m1 > m2)
    cout << s1 << endl
         << s2 << endl;
  else if (m2 > m1)
    cout << s2 << endl
         << s1 << endl;
  else if (d1 > d2)
    cout << s1 << endl
         << s2 << endl;
  else
    cout << s2 << endl
         << s1 << endl;
  return 0;
}