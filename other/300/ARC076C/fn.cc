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
  ll k=0;
  if(n==m) k=2;
  if(abs(n-m)==1) k=1;
  ll ans = 1;
  ll mod_num = 1000000007;
  while(n!=1){
    ans *= n;
    ans = ans % mod_num;
    --n;
  }
  while(m!=1){
    ans *= m;
    ans = ans % mod_num;
    --m;
  }
  ans = ans*k % mod_num;
  cout << ans << endl;

  return 0;
}