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
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n);
  rep(i, n) cin >> a.at(i);

  ll mins = 0;
  if ((n - 1) % (k - 1) == 0)
    mins = (n - 1) / (k - 1);
  else
    mins = (n - 1) / (k - 1) + 1;
  cout << mins << endl;

  return 0;
}