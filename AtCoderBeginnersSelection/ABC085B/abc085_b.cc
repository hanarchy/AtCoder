#include <cmath>
#include <cstdio>

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

int main(){
  uint32_t n;
  cin >> n;
  vector<int> d(n);
  rep(i, n) cin >> d[i];
  sort(all(d));
  int bef=-1, cnt=0;
  rep(i, n){
    if (d[i]>bef) {
      cnt++;
      bef = d[i];
    }
  }
  cout << cnt << endl;

  return 0;
}