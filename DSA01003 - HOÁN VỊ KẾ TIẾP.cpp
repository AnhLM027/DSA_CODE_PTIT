#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		next_permutation(a, a + n);
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout<<endl;
	}
}