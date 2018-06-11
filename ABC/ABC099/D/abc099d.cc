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
  int n, cn;
  cin >> n >> cn;
  vector<vector<int>> d(cn, vector<int>(cn,0));
  vector<vector<int>> c(n, vector<int>(n,0));

  rep(i, cn) rep(j,cn){
    cin >> d[i][j];
  }
  rep(i, n) rep(j,n){
    cin >> c[i][j];
  }
  int amari;
  vector<vector<ll>> iwakan(cn, vector<ll>(cn,0));
  rep(i, n) rep(j,n){
    rep(k, cn){
      amari = (i+j)%3;
      amari = c[i][j];
      iwakan[k][(i+j)%3] += d[c[i][j]-1][k];
    }
  }
  ll sum=1e9;
  rep(i, cn) {
    rep(j, cn){
      rep(k, cn){
        if(i!=j && j!=k && i!=k && iwakan[i][0]+iwakan[j][1]+iwakan[k][2]<sum)
          sum = iwakan[i][0]+iwakan[j][1]+iwakan[k][2];
      }
    }
  }
  cout << sum << endl;
  return 0;
}