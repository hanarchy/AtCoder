#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;
typedef long long int ll;

int main() {
  std::vector<int> v{1,3,114514,2,114513};
//  sort(v.begin(), v.end());
  auto itr = lower_bound(v.begin(), v.end(), 114);
  // *itr => 114514
  cout << *itr << endl;
  return 0;

}