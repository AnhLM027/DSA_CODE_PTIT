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

Node* insertBST(Node* root, int val) {
    if(!root) return new Node(val);

    if(val < root -> val) {
        root -> left = insertBST(root -> left, val);
    }
    else root -> right = insertBST(root -> right, val);
    return root;
}

void PreOrder(Node* root) {
    if(!root) return;

    cout << root -> val << " ";
    
    if(root -> left) PreOrder(root -> left);
    if(root -> right) PreOrder(root -> right);
}
	
int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;

        vector<int> a(n);
        for (int& x : a) cin >> x;
        Node* root = nullptr;

        for(int x : a) {
            root = insertBST(root, x);
        }
        
        PreOrder(root);
        cout << endl;
    }
    return 0;
}