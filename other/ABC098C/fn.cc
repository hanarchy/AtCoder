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
  ll n;
  cin >> n;
  string s;
  cin >> s;
  vector<string> v(n);
  rep(i, n) v.at(i) = s[i];

  vector<ll> vcnt(n, 0);

  for (int j = 1; j < n; ++j) if(v.at(j) == "E") ++vcnt.at(0);

  for (int k = 1; k < n; ++k) {
    vcnt.at(k) = vcnt.at(k-1);
    if(v.at(k-1) == "W") ++vcnt.at(k);
    if(v.at(k) == "E")--vcnt.at(k);
  }
  cout << *min_element(all(vcnt)) << endl;
  return 0;
}