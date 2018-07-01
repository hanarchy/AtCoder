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
struct sss{
  ll kaisou;
  bool isleft;
};
int main() {
  string s;
  cin >> s;
  deque<ll> que;
  vector<sss> v(s.size());
  ll kaisou =0;
  rep(i, s.size()){
    sss k;
    if(s[i]=='('){
      ++kaisou;
      k.isleft=true;
    }
    else{
      --kaisou;
      k.isleft=false;
    }
    k.kaisou = kaisou;
    v.push_back(k);
  }



  return 0;
}