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



typedef pair<ll, ll> P;
ll dijkstra(ll s, const ll& n, const vector<bool>& used, const vector<vector<P>>& cost, const ll& snuke, const ll& t){
  vector<P> di(n, pair(10000000000000,0));
  priority_queue<P, vector<P>, greater<P> > que;
  di.at(s).first = 0;
  di.at(s).second = 2;
  while (true){

    ll v = -1;
    rep(u, n)
      if (!used.at(u) && (v== -1 or di[u] < di[v])) v =u;
    if (v==-1) break;
    used[v] = true;

    ll prev_snuke_state = di.at(v).second;
    rep(u, n) {
      ll costs;
      if(v>=snuke){
        if(prev_snuke_state == 1)
          costs = cost.at(v).at(u).second;
        if(prev_snuke_state == 0)
          costs = cost.at(v).at(u).first;
      }
      else costs = cost.at(v).at(u).first;
      if(di.at(u).first> di.at(v).first +costs){
        di.at(u).first = di.at(v).first + costs;
        di.at(u).second =
      }

    }
  }
  return di.at(t);
}

int main() {
  ios::sync_with_stdio(false);
  ll n, m, s, t;
//  vector u(m), v(m), a(m), b(m);
  const ll infs = 1000000000000000;
  vector<vector<P>> cost(n, vector<P>(n, pair(infs,infs)));

  rep(i, m) {
    ll u, v, a, b;
//    cin >> u.at(i) >> v.at(i) >> a.at(i) >> b.at(i);
    cin >> u >> v >> a >> b;
    cost.at(u).at(v).first = a;
    cost.at(v).at(u).first = a;
    cost.at(u).at(v).second = b;
    cost.at(v).at(u).second = b;

  }

  vector<bool> used(n, false);
  rep(i, n){
    ll ans = dijkstra(s, n, used, cost, i,t);
  }
  cout << ans;
  return 0;
}
