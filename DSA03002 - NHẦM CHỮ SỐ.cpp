#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	string a, b; cin >> a >> b;
	string minA = a, minB = b, maxA = a, maxB = b;

	for(int i = 0; i < a.size(); i++) {
		if(a[i] == '5') maxA[i] = '6';
		else if(a[i] == '6') minA[i] = '5';
	}

	for(int i = 0; i < b.size(); i++) {
		if(b[i] == '5') maxB[i] = '6';
		else if(b[i] == '6') minB[i] = '5';
	}
	
	cout << (stoi(minA) + stoi(minB)) << " " << (stoi(maxA) + stoi(maxB));
	return 0;
}