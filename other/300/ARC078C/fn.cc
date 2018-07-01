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
  ll n;
  cin >> n;
  vector<ll> a(n);
  ll smy =0, x=0;
  rep(i, n){
    cin >> a.at(i);
    smy += a.at(i);
  }

  ll anssum = INT_FAST64_MAX;
  rep(i, n-1){
    x += a.at(i);
    anssum = min(anssum,abs(smy-2*x));
  }
  cout << anssum << endl;
  return 0;
}