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
  vector<ll> a(n), aa, v;
  rep(i, n) cin >> a.at(i);
  sort(all(a));
  aa = a;
  aa.erase(unique(all(aa)), aa.end());

  for (const auto &i: aa) {
    v.push_back(distance(lower_bound(all(a), i), upper_bound(all(a), i)));
  }
  ll is1 = 0;
  ll is2 = 0;
  for (int i = aa.size() - 1; i != -1; --i) {
    if (v.at(i) >= 2) {
      if (is1 == 0) {
        is1 = aa.at(i);
        if(v.at(i) >= 4){
          is2 = aa.at(i);break;
        }
      }
      else {
        is2 = aa.at(i);
        break;
      }
    }
  }

  cout << is1 * is2 << endl;

  return 0;
}