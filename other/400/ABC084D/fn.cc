#include <cmath>
#include <cstdio>
#include <limits>
#include <tuple>
#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <string>
#include <array>
#include <iomanip>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  ll q;
  cin >> q;
  ll n = 100000;
  vector<ll> primes;

  vector<bool> isPrime(static_cast<unsigned long>(n + 1), true);
  isPrime.at(0) = isPrime.at(1) = false;

  for (int i = 2; i <= n; ++i) {
    if (isPrime.at(i)) {
      primes.push_back(i);
      for (int j = 2 * i; j <= n; j += i) {
        isPrime.at(j) = false;
      }
    }
  }

  vector<ll> like2017(n + 1, 0);
  for (const auto &p : primes) {
    auto itr2 = find(all(primes), (p + 1) / 2);
    size_t dis2 = static_cast<size_t>(distance(primes.begin(), itr2));
    if (dis2 != primes.size()) like2017.at(p) = 1;
  }

  vector<ll> sum_like2017(n + 1, 0);

  for (int i = 1; i < n - 1; ++i) {
    sum_like2017.at(i + 1) = sum_like2017.at(i) + like2017.at(i + 1);
  }

  rep(i, q) {
    ll l, r;
    cin >> l >> r;
    --l;
    cout << sum_like2017.at(r) - sum_like2017.at(l) << endl;
  }

  return 0;
}
