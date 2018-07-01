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
  vector<ll> a(n), aa;
  rep(i, n) cin >> a.at(i);
  rep(i, n) a.push_back(a.at(i)+1);
  rep(i, n) a.push_back(a.at(i)-1);
  sort(all(a));
  aa = a;
  aa.erase(unique(all(aa)),aa.end());
  ll maxa=-1;
  for (const auto& i : aa){
    ll m = distance(lower_bound(all(a),i), upper_bound(all(a), i));
    if (m>maxa) maxa = m;
  }

  cout << maxa << endl;
}