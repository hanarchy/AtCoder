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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(m), b(m);
  rep(i,m) cin >> a.at(i) >> b.at(i);

  vector<ll> s;
  rep(i,m){
    if(a.at(i)==1) s.push_back(b.at(i));
    if(b.at(i)==1) s.push_back(a.at(i));
    if(a.at(i)==n) s.push_back(b.at(i));
    if(b.at(i)==n) s.push_back(a.at(i));
  }
  sort(all(s));
  size_t bef = s.size();
  s.erase(unique(all(s)), s.end());
  if (s.size()==bef) cout << "IMPOSSIBLE" << endl;
  else cout << "POSSIBLE" << endl;

  return 0;
}