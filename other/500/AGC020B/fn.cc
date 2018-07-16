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

struct hilo {
  ll high;
  ll low;
};

int main() {
  ios::sync_with_stdio(false);
  ll k;
  cin >> k;
  vector<ll> a(k);
  rep(i, k) cin >> a.at(i);
  bool isNone = false;

  vector<hilo> hl(k);
  if (a.at(k - 1) == 2) {
    hl.at(k - 1).high = 3;
    hl.at(k - 1).low = 2;
  }
  else isNone = true;

  for (int i = k - 2; i >= 0; --i) {

    if (hl.at(i + 1).low % a.at(i) == 0 or hl.at(i + 1).high % a.at(i) == 0
        or hl.at(i + 1).low / a.at(i) * a.at(i) != hl.at(i + 1).high / a.at(i) * a.at(i)) {
      hl.at(i).high = static_cast<ll>(floor(double(hl.at(i + 1).high) / double(a.at(i)) + 1) * a.at(i) - 1);
      hl.at(i).low = static_cast<ll>(ceil(double(hl.at(i + 1).low) / double(a.at(i)))) * a.at(i);
    } else {
      isNone = true;
      break;
    }

  }
  if (isNone) cout << -1 << endl;
  else cout << hl.at(0).low << " " << hl.at(0).high << endl;

  return 0;
}
