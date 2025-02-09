#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"



void Try(int i, vector<string>& res, string a, int n) {
	for(int j = 0; j <= 2; j++) {
		if(j == 1) continue;
		a[i] = j + '0';
		if(i == n) {
			res.push_back(a);
			return;
		}
		else Try(i + 1, res, a, n);
	}
}

vector<string> sinhNgay() {
	string a(2, '0');
	vector<string> res;
	Try(0, res, a, 2);
	vector<string> b;
	for(string s : res) if(!(s[0] == '0' && s[1] == '0')) b.push_back(s);
	return b;
}

vector<string> sinhNam() {
	string a(4, '0');
	vector<string> res;
	Try(0, res, a, 4);
	vector<string> b;
	for(string s : res) if(s[0] == '2') b.push_back(s);
	return b;
}

int main() {
    vector<string> Ngay = sinhNgay();
	vector<string> Nam = sinhNam();
	for(string s : Ngay) {
		for(string t : Nam) {
			cout << s << "/02/" << t << endl;
		}
	}
    return 0;
}