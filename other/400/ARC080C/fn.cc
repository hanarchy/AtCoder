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
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  ll n;
  cin >> n;

  ll a;
  ll cnt4=0, cnt0=0;
  rep(i, n){
    cin >> a;
    if(a%4==0) ++cnt4;
    if(a%2==1) ++cnt0;
  }
  if((cnt4 + cnt0 == n and cnt4 + 1>= cnt0)or cnt4>=cnt0) cout << "Yes" << endl;
  else cout << "No" << endl;


  return 0;
}
