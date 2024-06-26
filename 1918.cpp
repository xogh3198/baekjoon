#include <iostream>
#include <stack>
using namespace std;

stack<char> st;
string s;

int main() {
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      cout << s[i];
      continue;
    }
    if (s[i] == '(')
      st.push(s[i]);
    else if (s[i] == ')') {
      while (!st.empty() && st.top() != '(') {
        cout << st.top();
        st.pop();
      }
      st.pop();
    } else if (s[i] == '+' || s[i] == '-') {
      while (!st.empty() && st.top() != '(') {
        cout << st.top();
        st.pop();
      }
      st.push(s[i]);
    } else if (s[i] == '*' || s[i] == '/') {
      while (!st.empty() && (st.top() == '*' || st.top() == '/')) {
        cout << st.top();
        st.pop();
      }
      st.push(s[i]);
    }
  }
  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }
  return 0;
}
