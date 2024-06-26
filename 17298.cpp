#include <iostream>
#include <stack>
using namespace std;

int n;
stack<int> s;
int main() {
  cin >> n;
  int arr[1000001];
  int ans[1000001];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = n - 1; i >= 0; i--) {
    while (!s.empty() && s.top() <= arr[i])
      s.pop();
    if (s.empty())
      ans[i] = -1;
    else
      ans[i] = s.top();

    s.push(arr[i]);
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
}