#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
int n;
int arr[1000001];
int f[1000001];
int ans[1000001];
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    f[arr[i]]++;
  }
  for (int i = n - 1; i >= 0; i--) {
    while (!s.empty() && f[s.top()] <= f[arr[i]]) {
      s.pop();
    }
    if (s.empty()) {
      ans[i] = -1;
    }

    else
      ans[i] = s.top();

    s.push(arr[i]);
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
}