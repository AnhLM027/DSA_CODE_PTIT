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

void inorder(Node* root, vector<int>& nodes) {
    if(!root) return;
    inorder(root -> left, nodes);

    nodes.push_back(root -> val);
    
    inorder(root -> right, nodes);
}

void buildBST(Node* root, vector<int> nodes, int& ind) {
    if(!root) return;
    buildBST(root -> left, nodes, ind);

    root -> val = nodes[ind++];
    
    buildBST(root -> right, nodes, ind);
}

Node* BST(Node* root) {
    vector<int> nodes;
    inorder(root, nodes);

    sort(nodes.begin(), nodes.end());

    int ind = 0;
    buildBST(root, nodes, ind);
    return root;
}

void printBST(Node* root) {
    if(!root) return;
    printBST(root -> left);
    cout << root -> val << " ";
    printBST(root -> right);
}
	
int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;

        unordered_map<int, Node*> nodes;
        Node* root = nullptr;

        for (int i = 0; i < n; ++i) {
            int parent, child;
            string dir;
            cin >> parent >> child >> dir;

            if(!root) {
                root = new Node(parent);
                nodes[parent] = root;
            }
            
            if(dir == "L") {
                nodes[parent] -> left = new Node(child);
                nodes[child] = nodes[parent] -> left;
            }
            else {
                nodes[parent] -> right = new Node(child);
                nodes[child] = nodes[parent] -> right;
            }
        }

        Node* ans = BST(root);
        printBST(ans);
        cout << endl;
    }
    return 0;
}