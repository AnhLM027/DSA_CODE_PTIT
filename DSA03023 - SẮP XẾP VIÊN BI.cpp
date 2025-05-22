#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

int main() {
	int n; cin >> n;
    string s; cin >> s;
    
    int X = 0, T = 0, D = 0;
    for(char c : s) {
        if(c == 'X') X++;
        else if(c == 'D') D++;
    }

    int diffX = 0, diffD = 0, XD = 0, DX = 0;
    for(int i = 0; i < X; i++) {
        if(s[i] != 'X') diffX++;
        if(s[i] == 'D') XD++;
    }

    for(int i = n - D; i < n; i++) {
        if(s[i] != 'D') diffD++;
        if(s[i] == 'X') DX++;
    }

    cout << diffX + diffD - min(XD, DX) << endl;
	return 0;
}