#include <bits/stdc++.h>
using namespace std;

#define int long long


int pre(string x) {
    if (x == "+" || x == "-") return 1;
    if (x == "*" || x == "/") return 2;
    return 0;
}

string fix(string s) {
    string ans = "";
    stack<string> st;

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
			int j = i;
			string tmp = "";
			while(j < s.size() && isdigit(s[j])) {
				tmp += string(1, s[j]);
				//cout << tmp << endl;
				j++;
			}
			ans += tmp + " ";
			i = j - 1;
		}
        else if (s[i] == '(') st.push(string(1, s[i]));
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != "(") {
                ans += st.top() + " "; st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else {
            while(!st.empty() && pre(st.top()) >= pre(string(1, s[i]))) {
                ans += st.top() + " "; st.pop();
            }
            st.push(string(1, s[i]));
        }
    }

    while (!st.empty()) {
        ans += st.top() + " "; st.pop();
    }
    return ans;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        string s; cin >> s;
        s = fix(s);

		stack<int> st;
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
			if(c == ' ') continue;
            if(c == '+' || c == '-' || c == '/' || c == '*') {
                int op2 = st.top(); st.pop();
                int op1 = st.top(); st.pop();
                int tmp = 0;
                if(c == '+') tmp = op1 + op2;
                else if(c == '-') tmp = op1 - op2;
                else if(c == '*') tmp = op1 * op2;
                else tmp = op1 / op2;
                st.push(tmp);
            }
            else if (isdigit(c)) {
				string tmp = "";
				int j = i;
				while(j < s.size() && isdigit(s[j])) {
					tmp += string(1, s[j]);
					j++;
				}
				//cout << tmp << endl;
				st.push(stoll(tmp));
				i = j - 1;
			}
        }
        cout << st.top() << endl;
    }
    return 0;
}
