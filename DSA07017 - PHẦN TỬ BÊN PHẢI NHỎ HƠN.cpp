#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
		int n; cin >> n;
		vector<int> a(n), b(n);
		for(int& x : a) cin >> x;
		stack<int> st;
		
		for(int i = 0; i < n; i++) {
			while(!st.empty() && a[i] > a[st.top()]) {
				b[st.top()] = i;
				st.pop();
			}

			st.push(i);
		}
		
		while(!st.empty()) {
			b[st.top()] = -1;
			st.pop();
		}

		for(int i = 0; i < n; i++) {
			bool check = false;
			for(int j = b[i] + 1; j < n; j++) {
				if(a[j] < a[b[i]]) {
					check = true;
					b[i] = a[j];
					break;
				}
			}
			if(!check) b[i] = -1;
		}

		for(int x : b) cout << x << " ";
		cout << endl;
    }
	return 0;
}