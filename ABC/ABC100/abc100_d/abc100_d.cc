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

struct cake {
  ll x; // kirei
  ll y; // osii
  ll z; // ninki
};

int main() {
  ll f[2] = {1, -1};
  ll n, m;
  cin >> n >> m;
  vector<cake> c(n);
  rep(i, n)cin >> c.at(i).x >> c.at(i).y >> c.at(i).z;
  vector<ll> a(n);
  vector<ll> sums(8, 0);
  rep(i, 2) rep(j, 2) rep(k, 2) {
        rep(ii, n) {
          a.at(ii) = f[i] * c.at(ii).x + f[j] * c.at(ii).y + f[k] * c.at(ii).z;
        }
        sort(a.rbegin(), a.rend());
        rep(ii, m) {
          sums.at(i + 2 * j + 4 * k) += a.at(ii);
        }
      }

  cout << *max_element(sums.begin(), sums.end()) << endl;

  return 0;
}