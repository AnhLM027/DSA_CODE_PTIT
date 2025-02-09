#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int n;
int X[100], cot[100], cheo1[100], cheo2[100], cnt = 0;

void Try(int i) {
    for(int j = 0;  j < n;  j++) {
        if(cot[j] == 0 && cheo1[n + i - j] == 0 && cheo2[i + j - 1] == 0) {
            X[i] = j;
            cot[j] = 1, cheo1[n + i - j] = 1, cheo2[i + j - 1] = 1;
            if (i == n) cnt++;
            else Try(i + 1);
            cot[j] = 0, cheo1[n + i - j] = 0, cheo2[i + j - 1] = 0;
        }
    }
}
int main() {
    int tc; cin >> tc;
    while(tc--) {
    	for(int i = 0; i < 100; i++) {
    		X[i] = cot[i] = cheo1[i], cheo2[i] = 0;
		}
		cnt = 0;
	    cin >> n;
	    Try(1);
	    cout << cnt << endl;
	}
    return 0;
}