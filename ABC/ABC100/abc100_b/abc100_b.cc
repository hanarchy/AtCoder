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
  ll d, n;
  cin >> d >> n;
  ll ans;

  if(n==100)
    ans = static_cast<ll>(pow(100, d))*(n+1);
  else
    ans  = static_cast<ll>(pow(100, d))*n;


  cout << ans  << endl;

  return 0;
}