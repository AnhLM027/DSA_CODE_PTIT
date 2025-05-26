#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
		int n; cin >> n;
		vector<int> a(n);
		vector<int> mod[3];
		int sum = 0;
		
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
			mod[a[i] % 3].push_back(i);
		}
		
		vector<bool> used(n, true);
		
		for(int r = 1; r <= 2; ++r)
			sort(mod[r].begin(), mod[r].end(), [&](int i, int j) { return a[i] < a[j]; });


		if(sum % 3 == 1) {
			if(!mod[1].empty()) used[mod[1][0]] = false;
			else if(mod[2].size() >= 2) {
				used[mod[2][0]] = used[mod[2][1]] = false;
			}
			else {
				cout << "-1\n";
				continue;
			}
		}
		else if(sum % 3 == 2) {
			if(!mod[2].empty()) used[mod[2][0]] = false;
			else if(mod[1].size() >= 2) {
				used[mod[1][0]] = used[mod[1][1]] = false;
			}
			else {
				cout << "-1\n";
				continue;
			}
		}
		
		vector<int> res;
		for(int i = 0; i < n; i++) if(used[i]) res.push_back(a[i]);

		if(res.empty()) cout << "-1\n";
		else if(*max_element(res.begin(), res.end()) == 0) cout << "0\n";
		else {
			sort(res.rbegin(), res.rend());
			for(int x : res) cout << x;
			cout << '\n';
		}
    }
	return 0;
}