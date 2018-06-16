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
  ll a, b;
  cin >> a >> b;
  if (a<=8 && b <=8)
    cout << "Yay!" << endl;
  else
    cout << ":(" << endl;


  return 0;
}