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
#include <iomanip>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cout << fixed;
  cout << setprecision(10);

  ll n;
  cin >> n;
  double mean=0;
  rep(i, n) mean += i+1;
  mean /= n;
  double kitai=0;
  double k =double(n-1)/double(n);

  rep(i, n){
    kitai += mean*pow(k,i);
  }

  cout << kitai << endl;

  return 0;
}
