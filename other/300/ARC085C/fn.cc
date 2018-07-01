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
  ll n, m;
  cin >> n >> m;
  ll p=1;
  rep(i, m) p*=2;
  ll ans = 1900*m*p+ (n-m)*100*p;
  cout << ans << endl;

  return 0;
}