#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105


bool used[maxn] = {};

bool Try(int k, int st, int sum, int target, vector<int>& a) {
    if(k == 0) return true;
    if(sum > target) return false;
	
    if(sum == target) {
        return Try(k - 1, 0, 0, target, a);
    }

    for(int i = st; i < a.size(); ++i) {
        if(!used[i]) {
            used[i] = true;
            if(Try(k, i + 1, sum + a[i], target, a)) return true;
            used[i] = false;
        }
    }
    return false;
}

int main() {
    int tc; cin >> tc;
	while(tc--) {
		memset(used, false, sizeof(used));

		int n, k; cin >> n >> k;
		vector<int> a;
		for(int i = 0; i < n; i++) {
			int x; cin >> x;
			if(x > 0) a.push_back(x);
		}

		int sum = accumulate(a.begin(), a.end(), 0);
		if(sum % k != 0) {
			cout << "0" << endl;
			continue;
		}
		
		int target = sum / k;
		sort(a.rbegin(), a.rend());

		cout << Try(k, 0, 0, target, a) << endl;
	}
	
	return 0;
}