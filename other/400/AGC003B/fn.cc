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
  ll a;
  ll cnt = 0, bef =0;
  rep(i, n){
    cin >> a;
    cnt += (a+bef)/2;
    bef = (a+bef)%2;
    if (a==0) bef = 0;

  }
  cout << cnt << endl;

  return 0;
}
