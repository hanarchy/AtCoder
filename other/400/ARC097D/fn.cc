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

// Union Find begin

class UnionFind {
 private:
  vector<ll> _par;
  vector<ll> _rank;
 public:
  explicit UnionFind(ll n);
  ll find(ll x);
  void unite(ll x, ll y);
  bool isSame(ll x, ll y);
};

UnionFind::UnionFind(ll n) {
  for (ll i = 0; i < n; ++i) {
    _par.push_back(i);
    _rank.push_back(0);
  }
}

ll UnionFind::find(ll x) {
  if (_par.at(static_cast<unsigned long>(x)) == x) return x;
  else return _par.at(static_cast<unsigned long>(x)) = find(_par.at(static_cast<unsigned long>(x)));
}

void UnionFind::unite(ll x, ll y) {
  x = find(x);
  y = find(y);
  if (x == y) return;

  if (_rank.at(static_cast<unsigned long>(x)) < _rank.at(static_cast<unsigned long>(y)))
    _par.at(static_cast<unsigned long>(x)) = y;
  else {
    _par.at(static_cast<unsigned long>(y)) = x;
    if (_rank.at(static_cast<unsigned long>(x)) == _rank.at(static_cast<unsigned long>(y)))
      ++_rank.at(static_cast<unsigned long>(x));
  }

}

bool UnionFind::isSame(ll x, ll y) {
  return find(x) == find(y);
}

// Union Find end



int main() {
  ios::sync_with_stdio(false);
  ll n, m;
  cin >> n >> m;
  vector<ll> p(n), x(m), y(m);
  rep(i, n) cin >> p.at(i);
  rep(i, m) cin >> x.at(i) >> y.at(i);

  UnionFind uf(n);
  rep(i, m) uf.unite(x.at(i)-1, y.at(i)-1);

  ll cnt = 0;
  rep(i, n){
    if(uf.isSame(i, p.at(i)-1)) ++cnt;
  }

  cout << cnt << endl;

  return 0;
}