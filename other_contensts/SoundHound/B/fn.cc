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
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  ll w;
  cin >> w;
//  string ans;
  rep(i , s.size()){
    if (i%w==0) cout << s[i];
  }
  cout << endl;

  return 0;
}
