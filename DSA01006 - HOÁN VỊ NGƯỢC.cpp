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
		while(1) {
			prev_permutation(a.begin(), a.end());
			if(a == b) break;
			for(int i = 0; i < n; i++){
				cout << a[i];
			}
			cout << " ";
		}
		for(int x : a) cout << x;
		cout<<endl;
	}
}