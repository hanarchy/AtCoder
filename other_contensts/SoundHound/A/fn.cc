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
  ll a, b;
  cin >> a >> b;
  if(a+b == 15) cout << "+" << endl;
  else if(a*b == 15) cout << "*" << endl;
  else cout << "x" << endl;

  return 0;
}
