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
  vector<ll> abc(3);
  rep(i, 3) cin >> abc.at(i);
  ll maxd = *max_element(all(abc));
  ll s=0;
  rep(i, 3) s+=maxd-abc.at(i);
  if(s%2==1) s+=3;
  cout << s/2 << endl;

  return 0;
}