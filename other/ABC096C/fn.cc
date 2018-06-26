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
  ll h ,w;
  cin >> h >> w;
  vector<vector<ll>> vv(h,vector<ll>(w));
  rep(i, h){
    string tmp;
    cin >> tmp;
    rep(j, w) vv.at(i).at(j) = tmp.substr(j,1)=="#" ? 1:0;
  }
  bool flag=true;
  rep(i, h) rep(j, w){
    if(vv.at(i).at(j)==1 && flag){
      if(0<=i-1 && flag) flag = vv.at(i-1).at(j)==0;
      if(h>i+1 && flag) flag = vv.at(i+1).at(j)==0;
      if(0<=j-1 && flag) flag = vv.at(i).at(j-1)==0;
      if(w>j+1 && flag ) flag = vv.at(i).at(j+1)==0;
      flag = !flag;
    }
  }
  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}