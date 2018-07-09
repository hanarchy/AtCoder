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
#include <iomanip>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  ll n, m, d;
  cin >> n >> m >> d;
  double ans;
  if(d == 0) ans = 1/double(n) * double(m-1);
  else ans = double(2*(n-d))/double(n)/double(n) * double(m-1);
  cout << fixed << setprecision(10) << ans << endl;


  return 0;
}
