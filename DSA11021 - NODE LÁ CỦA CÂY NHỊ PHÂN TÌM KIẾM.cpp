#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
};

void KhoiPhuc(Node*& root, vector<int>& a) {
	
    if (a.empty()) return;
    
    root = new Node(a[0]);
    int i = 1;
    while (i < a.size() && a[i] < a[0]) i++;

    vector<int> a1(a.begin() + 1, a.begin() + i);
    KhoiPhuc(root -> left, a1);

    vector<int> a2(a.begin() + i, a.end());
    KhoiPhuc(root -> right, a2);
}

void PreOrder(Node* node) {
    if (node == nullptr) return;

    if(node -> left == NULL && node -> right == NULL) cout << node -> val << " ";

    PreOrder(node->left);
    PreOrder(node->right);
}
	
int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;

        vector<int> a(n);
        for (int& x : a) cin >> x;
        Node* root = nullptr;

        KhoiPhuc(root, a);
        
        PreOrder(root);
        cout << endl;
    }
    return 0;
}