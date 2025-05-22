#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

int main() {
	int tc; cin >> tc;
	while(tc--) {
		string s; cin >> s;

        long long ans = 0;
        int balance = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '[') balance++;
            else {
                balance--;
                if(balance < 0){
                    for(int j = i + 1; j < s.size(); j++) {
						if(s[i] != s[j]) {
							ans += j - i;
							swap(s[i], s[j]);
							balance = 1;
							break;
						}
					}
                }
            }
        }

        cout << ans << "\n";
	}
	return 0;
}