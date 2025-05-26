#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105



int main() {
    int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n);
		for(int& x : a) cin >> x;

		vector<int> res;
		stack<int> st;

		for(int i = 0; i < n; i++) {
			if(st.empty()) {
				st.push(i);
				res.push_back(i + 1);
			}
			else {
				while(!st.empty() && a[i] >= a[st.top()]) st.pop();

				if(st.empty()) res.push_back(i + 1);
				else res.push_back(i - st.top());
				st.push(i);
			}
		}

		for(int x : res) cout << x << " ";
		cout << endl;
	}
	return 0;
}