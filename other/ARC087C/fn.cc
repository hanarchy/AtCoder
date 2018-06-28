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
  vector<ll> a(n), b(n), ansv;
  rep(i, n) cin >> a.at(i);
  size_t leng = a.size();

  sort(all(a));
  b=a;
  b.erase(unique(all(b)), b.end());
  map<ll,ll> cnt;
  for (auto i: b) cnt[i]=0;

  rep(i, n) ++cnt[a.at(i)];
  for (auto i :b)
    if(cnt[i]>=i) ansv.push_back(i);


  ll sum=0;
  for (auto i: ansv) sum += i;
  cout << leng - sum << endl;
  return 0;
}