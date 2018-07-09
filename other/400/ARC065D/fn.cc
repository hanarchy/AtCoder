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
  ll n, k, l;
  cin >> n >> k >> l;

  ll p, q, r, s;
  UnionFind ufl(n), ufd(n);
  rep(i, k) {
    cin >> p >> q;
    ufl.unite(p-1, q-1);
  }
  rep(i, l) {
    cin >> r >> s;
    ufd.unite(r-1, s-1);
  }
  map<pair<ll ,ll>, ll> cnt;
  rep(i, n)
    cnt[make_pair(ufl.find(i), ufd.find(i))] += 1;

  rep(i, n)
    cout << cnt[make_pair(ufl.find(i), ufd.find(i))] << " ";


  cout << endl;


  return 0;
}
