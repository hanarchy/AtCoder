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
  ll x;
  cin >> x;
  ll ans = x/11*2;
  ll nokori = x%11;
  if(nokori>=7) ans += 2;
  else if(nokori>=1) ans+=1;

  cout << ans << endl;


  return 0;
}