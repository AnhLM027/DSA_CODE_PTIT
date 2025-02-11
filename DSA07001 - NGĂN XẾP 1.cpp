#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	string s;
    int n;
    vector<int> st;
	while(cin >> s) {
        if(s == "push") {
            cin >> n;
            st.push_back(n);  
        }
        else if(s == "show") {
            if(st.size() == 0) cout << "empty" << endl;
            else {
                for(int x : st) cout << x << " ";
                cout << endl;
            }
        }
        else if(s == "pop") st.pop_back();
	}
	return 0;
}