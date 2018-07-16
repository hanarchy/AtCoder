#include <cmath>
#include <cstdio>
#include <limits>
#include <tuple>
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

int main() {
  ios::sync_with_stdio(false);
  ll k;
  cin >> k;
//  ll n = k>50 ? 50 : k;
  if(k==0){
    cout << 2 << endl;
    cout << "1 1" << endl;
  }
  else if(k==1){
    cout << 3 << endl;
    cout << "1 0 3" << endl;
  }
  else if(k>=2500){
    ll n=50;
    cout << n << endl;
    rep(i, n) cout << (k%n >=i?k/n:k/n-1) << " ";
    cout << endl;
  }
  else if(k<=50){
    ll n =k;
    cout << n << endl;
    rep(i, n) cout << k << " ";
    cout << endl;
  }else{
    ll n =50;
    cout << n << endl;
    rep(i, n) cout << 51 << " ";
    cout << endl;
  }




  return 0;
}
