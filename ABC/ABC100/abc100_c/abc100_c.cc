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

ll div2(ll d, ll cnt){
  if(d%2 == 0){
    ++cnt;
    div2(d/2, cnt);
  } else{
    return cnt;
  }

}

int main() {
  ll n;
  cin >>n;
  vector<ll> a(n);
  rep(i, n)
    cin >> a[i];
  ll cnt=0;
  rep(i, n){
    cnt += div2(a.at(i), 0);
  }
  cout << cnt << endl;

  return 0;
}