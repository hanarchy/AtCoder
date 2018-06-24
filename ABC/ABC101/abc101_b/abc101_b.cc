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
  string s = to_string(n);
  ll sum=0;
  rep(i, s.size()){
    sum += stoi(to_string(s[i]))-48;
  }
  if(n%sum==0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}