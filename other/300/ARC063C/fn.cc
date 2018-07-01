#include <cmath>
#include <cstdio>

#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <string>
#include <array>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long int ll;

int main() {
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  ll pcol = s[0]=='W' ? 1:0;
  ll cnt = 0;
  for (int i = 1; i < s.size(); ++i) {
    ll ccol = s[i]=='W' ? 1:0;
    if(pcol!=ccol){
      pcol = ccol;
      ++cnt;
    }
  }
  cout << cnt << endl;

  return 0;
}