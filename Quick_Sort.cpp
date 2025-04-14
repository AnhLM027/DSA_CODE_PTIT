#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"



int pertition(vector<int>& a, int l, int r) {
	int pivot = a[r];
	int i = l;
	for(int j = l; j < r; j++) {
		if(a[j] < pivot) {
			swap(a[i], a[j]);
			i++;
		}
	}
	swap(a[i], a[r]);
	return i;
}


void QuickSort(vector<int>& a, int l, int r) {
	if(l < r) {
		int pi = pertition(a, l, r);

		QuickSort(a, l, pi - 1);
		QuickSort(a, pi + 1, r);
	}
}

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int& x : a) cin >> x;
	QuickSort(a, 0, n - 1);
	for(int x : a) cout << x << " ";	
	return 0;
}