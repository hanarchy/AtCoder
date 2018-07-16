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
ll memo[100];

ll fib(ll n) {
  if (n <= 1) return n;
  if (memo[n] != 0) return memo[n];
  return memo[n] = fib(n - 1) + fib(n - 2);
}

bool nibutan(const ll& x, const ll& b, ll i, const vector<ll>& fibs){
  return b*fibs.at(i+1) + fibs.at(i) <= x;
}

int main() {
  ios::sync_with_stdio(false);
  ll t;
  cin >> t;
  ll x;
  vector<ll> fibs(88);
  rep(i, 88) {
    fibs.at(i) = fib(i);
  }
  ll a = 1;
  rep(i, t) {
    cin >> x;
    bool flag = false;
    ll b = 1, ans;
    while (1) {
      flag = false;
      ll lb = 0, ub = 86, mid;

      rep(j, 10) {
        mid = (lb + ub)/2;
        if (nibutan(x, b, mid, fibs) ) lb = mid;
        else ub = mid;
      }
      ans = b * fibs.at(mid + 1) + fibs.at(mid);
      flag = ans == x;

      if (flag) break;
      ++b;
    }
    cout << a << " " << b << endl;

  }

  return 0;
}
