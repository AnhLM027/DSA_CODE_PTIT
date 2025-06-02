#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105

bool isValid(string s) {
	if(s.size() < 2) return false;
    int bal = 0;
    for(char c : s) {
        if(c == '(') bal++;
        else if(c == ')') {
            if(bal == 0) return false;
            bal--;
        }
    }
    return bal == 0;
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;

        unordered_set<string> visited;
        queue<string> q;
        vector<string> res;

        q.push(s);
        visited.insert(s);

        bool found = false;

        while(!q.empty()) {
            string cur = q.front(); q.pop();

            if(isValid(cur)) {
                res.push_back(cur);
                found = true;
            }

            if(found) continue;

            for(int i = 0; i < cur.size(); ++i) {
                if(!isalpha(cur[i])) {
                    string next = cur.substr(0, i) + cur.substr(i + 1);
                    if(!visited.count(next)) {
                        visited.insert(next);
                        q.push(next);
                    }
                }
            }
        }

        if(res.empty()) cout << "-1" << endl;
        else {
            sort(res.begin(), res.end());
            res.erase(unique(res.begin(), res.end()), res.end());
            for(auto& t : res) cout << t << " ";
            cout << endl;
        }
    }

    return 0;
}
