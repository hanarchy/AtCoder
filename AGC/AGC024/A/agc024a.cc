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
  ll a,b,c,k;

  ll n_a, n_b, n_c;
  cin >> a >> b >>c >>k;
  if(k%2==0)
    cout << a-b << endl;
  else
    cout << b-a << endl;
  return 0;
}