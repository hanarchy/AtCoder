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

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  ll n;
  cin >> n;

  vector<ll> primes;
  primes.push_back(2);
  vector<ll> ans;
  for (int i = 3; i < 55555; ++i) {
    if (ans.size() >=n) break;
    bool isPrime = true;
    for (const auto& prime : primes){
      if (i%prime==0) {isPrime = false; break;}
    }
    if (isPrime) {
      primes.push_back(i);
      if (i%5 == 1) ans.push_back(i);
    }

  }

  rep(i, n) cout << ans.at(i) << " ";
  cout << endl;
  return 0;
}
