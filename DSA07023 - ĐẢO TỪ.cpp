#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    cin.ignore();
    while(tc--) {
        string s, t;
        getline(cin, s);
        stringstream ss(s);
        stack<string> st;
        while(ss >> t) st.push(t);
        while(!st.empty()) {
            cout << st.top() << " "; st.pop();
        }
        cout << endl;
    }
	return 0;
}