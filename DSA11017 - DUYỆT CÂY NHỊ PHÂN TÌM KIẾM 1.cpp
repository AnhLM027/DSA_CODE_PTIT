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

void KhoiPhuc(Node*& c, vector<int>& a) {
	
    if (a.empty()) return;
    
    c = new Node(a[0]);
    int i = 1;
    while (i < a.size() && a[i] < a[0]) i++;

    vector<int> a1(a.begin() + 1, a.begin() + i);
    KhoiPhuc(c -> left, a1);

    vector<int> a2(a.begin() + i, a.end());
    KhoiPhuc(c -> right, a2);
}

void Postorder(Node* node) {
    if (node == nullptr) return;

    Postorder(node->left);
    Postorder(node->right);
    
    cout << node -> val << " ";
}
	
int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;

        vector<int> a(n);
        for (int& x : a) cin >> x;
        Node* root = nullptr;

        KhoiPhuc(root, a);

        Postorder(root);
        cout << endl;
    }
    return 0;
}