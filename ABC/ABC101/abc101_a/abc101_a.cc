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
  string s;
  cin >> s;
  ll c=0;
  rep(i,4){
    if(s[i]=='-') --c;
    else ++c;
  }
  cout << c << endl;
  return 0;
}