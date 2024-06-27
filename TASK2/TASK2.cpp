// this place will be empty for a little time

#include <bits/stdc++.h>
#include <deque>
using namespace std;
#define faster                 \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);            \
  cout.tie(nullptr);
#define ff first
#define ss second
#define ll long long int
#define File                        \
  freopen("input.txt", "r", stdin); \
  freopen("output.txt", "w", stdout);
#define testCase \
  int tc = 1;    \
  cin >> tc;     \
  for (int i = 1; i <= tc; i++)
#define yes                \
  {                        \
    cout << "YES" << endl; \
    return;                \
  }
#define no                \
  {                       \
    cout << "NO" << endl; \
    return;               \
  }

void solve()
{
  int n;
  char type;
  cin >> n;
  cin >> type;
  // cout << n << " " << type << endl;
  string s = "";
  if(type == 'a')
  {
    for(int i = 0;i<n;i++)
    {
      s += ('a'+i);
    }
  }
  if(type == '1')
  {
    for(int i = 1;i<=n;i++)
    {
      s += ('0'+i);
    }
  }
  cout << s << endl;

  for(int i  = 1;i<n-1;i++)
  {
    cout << s[i] ;
    for(int j = 0;j<n-2;j++)
    {
      cout << " ";
    }
    cout << s[n - i-1] << endl; 
  }
  reverse(s.begin(),s.end());
  cout << s<< endl;
}

int main()
{
  faster;
  // File
  // testCase
  {
    // cout << "Case " << i << ": ";
    solve();
  }
}
