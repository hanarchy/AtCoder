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
  ll a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  ll sum=0;
  if(a + b > c*2) {
    ll minxy = min(x, y);
    sum = 2 * c * minxy;
    x -= minxy;
    y -= minxy;
  }
  if(a > c*2) sum += x*c*2;
  else sum += a*x;
  if(b > c*2) sum += y*c*2;
  else sum += b*y;

  cout << sum << endl;


  return 0;
}