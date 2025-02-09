#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n), b(n);
		for(int i = 0; i < n; i++) {
			b[i] = a[i] = i + 1;
		}
		for(int x : a) cout << x;
		cout << " ";
		while(1) {
			next_permutation(a.begin(), a.end());
			if(a == b) break;
			for(int i = 0; i < n; i++){
				cout << a[i];
			}
			cout << " ";
		}
		cout<<endl;
	}
}