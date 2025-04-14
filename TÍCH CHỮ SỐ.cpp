#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "LÊ MINH ANH"
#define MOD (int)(1e9 + 7)
ll LIMIT = (int)(sqrt(1e15));


int main() {
	vector<int> prime = {2, 3, 5, 7, 11, 13};
	int tc; cin >> tc;
	while(tc--) {
		ll P; cin >> P;
		if(P < 10) {
			cout << P << endl;
			continue;
		}
		vector<int> a;
		
		for(int i = 9; i > 1; i--) {
			while(P % i == 0 && P > 1) {
				a.push_back(i);
				P /= i;
			}
		}

		if(P > 1) {
			cout << "-1 " << endl;
			continue;
		}
		for(int i = a.size() - 1; i >= 0; i--) cout << a[i];
		cout << endl;
	}
}