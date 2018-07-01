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

struct pos{
  int x;
  int y;
};

typedef pair<int, int> P;
int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1};


int main(){
  const int kinf=1000000;
  int fields[50][50];
  pos g{0,0}, s{0,0};
  int r, c;
  string m;
  cin >> r >> c;
  cin >> s.y >> s.x;
  cin >> g.y >> g.x;
  rep(y, r){
    cin >> m;
    rep(x, c){
      if (m.substr(x, 1)=="#") fields[y][x] = 0;
      else fields[y][x] = 1;
    }
  }
  queue<P> que;
  int d[50][50];
  rep(i, r){
    rep(j, c) d[i][j] = kinf;
  }
  que.push(P(s.y-1,s.x-1));
  d[s.y-1][s.x-1] = 0;

  while (que.size()){
    P p = que.front(); que.pop();
    if(p.first == g.y-1 && p.second == g.x-1) break;

    rep(i, 4){
      int nx = p.second + dx[i], ny = p.first + dy[i];

      if (fields[ny][nx] == 1 && d[ny][nx] == kinf){
        que.push(P(ny,nx));
        d[ny][nx] = d[p.first][p.second] + 1;
      }
    }
  }
  cout << d[g.y-1][g.x-1] << endl;

  return 0;
}