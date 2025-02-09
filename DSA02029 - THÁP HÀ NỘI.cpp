#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void Try(int n, char A, char B, char C){
    if(n == 0) return;
    Try(n - 1, A, C, B);
    cout << A << " -> " << B << "\n";
    Try(n - 1, C, B, A);
}

int main(){
	int n; cin >> n;
	Try(n, 'A', 'C', 'B');
	return 0;
}