// AC

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
  ll b, n;
  cin >> n;
  ll befsum =10000000000;
  for (ll a = 1; a < n; ++a) {
    b=n-a;
    string sb=to_string(b), sa=to_string(a);
    ll sum =0;
    for (int i = 0; i < sa.size(); ++i) {
      sum += stoi(sa.substr(i,1));
    }
    for (int i = 0; i < sb.size(); ++i) {
      sum += stoi(sb.substr(i,1));
    }
    if(befsum>sum)
      befsum=sum;
  }


  cout << befsum << endl;


  return 0;
}