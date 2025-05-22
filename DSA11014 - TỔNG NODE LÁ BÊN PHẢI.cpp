#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node() {
        val = 0;
        left = right = nullptr;
    }
    Node(int x) {
        val = x;
        left = right = nullptr;
    }
};

ll sumRight(Node* root) {
    if(!root) return 0;

    ll sum = 0;
    if(root -> right && root -> right -> left == NULL && root -> right -> right == NULL) {
        sum += root -> right -> val;
    }

    return sum + sumRight(root -> left) + sumRight(root -> right);
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

        cout << sumRight(root) << endl;
    }
    return 0;
}