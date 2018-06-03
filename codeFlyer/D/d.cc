// RE & TLE

#include <iostream>
#include <vector>
using namespace std;

int main() {
  uint64_t h, w, n, m;

  vector<vector<bool>> stamp;
  string s;
  cin >> h >> w >> n >> m;
  vector<bool> tmp;
  for (uint64_t i = 0; i < n; ++i) {
    tmp.clear();
    cin >> s;
    for (size_t j = 0; j < m; ++j) {
      tmp.push_back(s.substr(j, 1) == "#");
    }
    stamp.push_back(tmp);
  }

  vector<vector<bool>> papar(h, vector<bool>(w));
  for (auto &&v:papar) {
    for (auto &&f:v) {
      f = false;
    }
  }
  for (uint64_t i = 0; i <= h - n; ++i) {
    for (uint64_t j = 0; j <= w - m; ++j) {
      for (uint64_t nn = 0; nn < n; ++nn) {
        for (uint64_t mm = 0; mm < m; ++mm) {
          if (stamp[nn][mm]) papar[i + nn][j + mm] = true;
        }
      }
    }
  }

  uint64_t cnt = 0;

  for (auto v:papar) {
    for (auto f:v) {
      if (f) ++cnt;
    }
  }
  cout << cnt << endl;

  return 0;
}