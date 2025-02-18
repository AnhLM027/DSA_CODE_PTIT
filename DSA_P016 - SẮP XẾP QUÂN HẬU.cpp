#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int maxTotal;
int a[9][9];
int X[100], cot[100], cheo1[100], cheo2[100];

void Try(int i, int sum) {
    for(int j = 1; j <= 8; j++) {
        if(cot[j] == 0 && cheo1[8 + i - j] == 0 && cheo2[i + j - 1] == 0) {
            X[i] = j;
			sum += a[i][X[i]];
            cot[j] = 1, cheo1[8 + i - j] = 1, cheo2[i + j - 1] = 1;
            if (i == 8) {
				maxTotal = max(maxTotal, sum);
			}
            else Try(i + 1, sum);
			sum -= a[i][X[i]];
            cot[j] = 0, cheo1[8 + i - j] = 0, cheo2[i + j - 1] = 0;
        }
    }
}

int main() {
    int tc; cin >> tc;
	int cnt = 1;
    while(tc--) {
		maxTotal = -1e9;
		for(int i = 1; i <= 8; i++) {
			for(int j = 1; j <= 8; j++) {
				cin >> a[i][j];
			}
		}
    	for(int i = 0; i < 100; i++) {
    		X[i] = cot[i] = cheo1[i], cheo2[i] = 0;
		}
	    Try(1, 0);
	    cout << "Test " << cnt++ << ": " << maxTotal << endl;
	}
    return 0;
}