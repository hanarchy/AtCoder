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

#define rep(i, n) for (int (i) = 0; (i) < (int)(n); ++(i))
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long int ll;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a.at(i);
  sort(all(a));
  vector<ll> v= a;
  v.erase(unique(all(v)),v.end());

  vector<ll> va, vaa;
  va.push_back(-1);
  rep(i, v.size()) va.push_back(distance(a.begin(), upper_bound(all(a),v.at(i))) - 1);
  rep(i, va.size()-1) vaa.push_back(va.at(i+1)-va.at(i));

  sort(all(vaa));

  ll sum =0;
  rep(i, v.size()-k) sum+= vaa.at(i);
  cout << sum << endl;


  return 0;
}