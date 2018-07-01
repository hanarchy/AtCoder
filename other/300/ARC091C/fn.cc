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
  ll ans;
  if(n == 1 and m!= 1) ans= m-2;
  else if(m == 1 and n != 1) ans= n-2;
  else if(n == 1 and m == 1) ans =1;
  else ans = (m-2)*(n-2);

  cout << ans << endl;
  return 0;
}