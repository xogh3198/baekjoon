#include <iostream>
using namespace std;

int main() {
  string A, B, C, D;
  cin >> A >> B >> C >> D;
  string AB = A + B;
  string CD = C + D;
  long long ans = stoll(AB) + stoll(CD);

  cout << ans;
}