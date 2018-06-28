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
  ll x, y;
  cin >> x >> y;
  ll p2=1, cnt=0;
  while(x*p2<=y){
    p2 *= 2;
    ++cnt;
  }
  cout << cnt << endl;
  return 0;
}