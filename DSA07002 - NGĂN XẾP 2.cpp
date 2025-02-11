#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	string s;
    int tc, n;
    vector<int> st;
    cin >> tc;
	while(tc--) {
        cin >> s;
        if(s == "PUSH") {
            cin >> n;
            st.push_back(n);  
        }
        else if(s == "PRINT") {
            if(st.size() == 0) cout << "NONE" << endl;
            else cout << st[st.size() - 1] << endl;
        }
        else if(s == "POP" && st.size() > 0) st.pop_back();
	}
	return 0;
}