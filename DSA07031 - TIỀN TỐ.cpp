#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


bool check(string s) {
	return s == "+" || s == "-" || s == "*" || s == "/";
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<string> s(n);
		for(string& t : s) cin >> t;
		
		stack<ll> st;
		for(int i = n - 1; i >= 0; i--) {
			if(!check(s[i])) st.push(stoll(s[i]));
			else {
				ll num1 = st.top(); st.pop();
				ll num2 = st.top(); st.pop();

				if(s[i] == "+") st.push(num1 + num2);
				else if(s[i] == "-") st.push(num1 - num2);
				else if(s[i] == "*") st.push(num1 * num2);
				else st.push(num1 / num2);
			}
		}

		cout << st.top() << endl;
	}

	return 0;
}