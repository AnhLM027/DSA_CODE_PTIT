#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		string s; cin >> s;

		stack<string> st;
		string ans = "";

		for(char c : s) {
			if(c == '+' || c == '-' || c == '*' || c == '/') {
				string t1 = st.top(); st.pop();
				string t2 = st.top(); st.pop();
				st.push(t2 + c + t1);
			}
			else st.push(string(1, c));
		}
		cout << st.top() << endl;
	}

	return 0;
}