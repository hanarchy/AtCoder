// TLE
#include <iostream>
#include <vector>
using namespace std;

int main() {
  uint32_t n, d, x;
  cin >> n >> d;
  vector<uint32_t> v;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    v.push_back(x);
  }

  int cnt = 0;
  for (int i = 0; i < n - 2; ++i) {
    if (v[i + 1] - v[i] > d)continue;
    for (int j = i + 1; j < n - 1; ++j) {
      for (int k = j + 1; k < n; ++k) {
        if (v[k] - v[j] > d) break;
        if ((v[k] - v[j]) <= d && (v[j] - v[i]) <= d && (v[k] - v[i]) > d) {
          ++cnt;
        }
      }
    }
  }
  cout << cnt << endl;

  return 0;
}