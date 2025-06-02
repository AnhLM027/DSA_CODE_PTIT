#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define AnhLM027 "Lê Minh Anh"


class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int x): val(x), left(NULL), right(NULL) {}
};

Node* Build(vector<int> a, int l, int r) {
    if(l > r) return NULL;
    int mid = (l + r) / 2;
    
    Node* root = new Node(a[mid]);
    root -> left = Build(a, l, mid - 1);
    root -> right = Build(a, mid + 1, r);
    return root; 
}

void Preorder(Node* root, int& cnt) {
    if(!root) return;
    if(!root -> left && !root -> right) cnt++;

    Preorder(root -> left, cnt);
    Preorder(root -> right, cnt);
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        
        sort(a.begin(), a.end());

        Node* root = Build(a, 0, n - 1);

        int ans = 0;
        Preorder(root, ans);
        cout << ans << endl;
    }

    return 0;
}

