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
  string s;
  cin >> s;
  ll k;
  cin >> k;

  vector<string> v;
  for (int i = 0; i < s.size(); ++i) {
    for (int j = 1; j <= k; ++j) {
      string tmp = s.substr(i,j);
      v.push_back(tmp);
    }
  }
  sort(all(v));
  v.erase(unique(all(v)), v.end());

  cout << v.at(k-1) << endl;

  return 0;
}