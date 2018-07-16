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
#include <iomanip>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int next_perm(vector<ll>& p, const int& n)
{
  int i, j, k, tmp;

  for(i = n - 1; i > 0 && p[i-1] >= p[i]; i--);

  if(i == 0) return 0;

  for(j = n - 1; j > i && p[i-1] >= p[j]; j--);

  tmp = p[i-1], p[i-1] = p[j], p[j] = tmp;

  for(k = 0; k <= ((n-1)-i)/2; k++){
    tmp = p[i+k], p[i+k] = p[(n-1)-k], p[(n-1)-k] = tmp;
  }
  return 1;
}



int main() {
  ios::sync_with_stdio(false);
  ll n;
  cin >> n;
  string s;
  cin >> s;
  size_t n2 = s.size();
  ll i = 0;
  vector<ll> p(n2,0);
  rep(i, n){
    p.at(n+i) = 1;
  }

  ll cnt = 0;
  do {
    string r, b;
    for(int i = 0; i < n2; ++i){
      if(p.at(i) == 0)  r.push_back(s[i]);
      else{
        string bs{s.at(i)};
        b.insert(0, bs);
      }
    }
    if(b == r) ++cnt;
  } while(next_perm(p, n2));
  cout << cnt << endl;




  return 0;
}
