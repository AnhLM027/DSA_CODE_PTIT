#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int n;
int b[100], a[100];
bool check[1000] = { false };

void in(int b[]) {
    for(int i = 0; i < n; i++) cout << a[b[i]] << " ";
    cout << endl;
}

void Try(int i) {
    for(int j = 0; j < n; j++) {
        if (!check[j]) {
            b[i] = j;
            if (i == n - 1) in(b);
            check[j] = 1;
            Try(i + 1);
            check[j] = 0;
        }
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    Try(0);
    return 0;
}
