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
  ios::sync_with_stdio(false);
  ll n;
  cin >> n;

  vector<ll> a(n);
  rep(i,n) cin >> a.at(i);

  deque<ll> que;

  rep(i, n){
    if(i%2==0) que.push_back(a.at(i));
    else que.push_front(a.at(i));
  }
  if(n%2==0){
    rep(i, n-1) cout << que.at(i) << " ";
    cout << que.at(n-1) << endl;

  }
  else{
    for (int i = n-1; i > 0 ; --i) cout << que.at(i) << " ";
    cout << que.at(0) << endl;
  }

  return 0;
}