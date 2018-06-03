#include <cmath>
#include <cstdio>

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
  ll n, sum=0;
  int a, b;
  cin >> n >> a >> b;
  rep(i, n){
    string s=to_string(i+1);
    ll sum_digits=0;
    rep(j, s.size()) sum_digits += stoi(s.substr(j,1));
    if (a <= sum_digits && sum_digits <= b)
      sum += i+1;
  }

  cout << sum << endl;


  return 0;
}