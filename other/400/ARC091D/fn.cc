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
  ll n, k;
  cin >> n >> k;
  ll cnt=0;
  for (ll b = k+1; b <= n; ++b) {
    ll s= n/b;
    cnt += s*(b-k);
    for (int i = 1; i <= n - s * b; ++i) {
      if(i>=k) ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}
