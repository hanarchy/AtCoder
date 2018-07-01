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
  ios::sync_with_stdio(false);
  ll n, m;
  cin >> n >> m;
  ll ans;
  if(n-m/2>=0)
    ans = m/2;
  else
    ans = n + (m-2*n)/4;

  cout << ans << endl;


  return 0;
}