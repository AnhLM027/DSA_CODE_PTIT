#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define AnhLM027 "Lê Minh Anh"


int main() {
    string s; cin >> s;
    stack<char> sl, sr;

    for(char c : s) {
        if(c == '<') {
            if(!sl.empty()) {
                sr.push(sl.top()); sl.pop();
            }
        }
        else if(c == '>') {
            if(!sr.empty()) {
                sl.push(sr.top()); sr.pop();
            }
        }
        else if(c == '-') {
            if(!sl.empty()) sl.pop();
        }
        else sl.push(c);
    }
    string ans = "";

    while(!sl.empty()) {
        ans += sl.top(); sl.pop();
    }
    
    reverse(ans.begin(), ans.end());
    
    while(!sr.empty()) {
        ans += sr.top(); sr.pop();
    }
    cout << ans << endl;

    return 0;
}

