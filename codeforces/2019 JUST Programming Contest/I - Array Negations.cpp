#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    long long sum = 0;
    cin >> n >> k;
    int n1 = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] < 0)
        n1++;
    }
    sort(a, a + n);
    if (n1 >= k)
    {
      for (int i = 0; i < k; i++)
      {
        a[i] = -a[i];
      }
    }
    else {
      for (int i = 0; i < n1; i++)
      {
        a[i] = -a[i];
      }
      sort(a,a+n);
      for(int i=0;i<k-n1;i++)a[0]=-a[0];
    }
    cout << accumulate(a, a + n, sum) << endl;
  }

  return 0;
}