#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


class Node {
	public:
		int val;
		Node* next;
		Node() {
			next = nullptr;
		}
		Node(int x) {
			val = x;
			next = nullptr;
		}
};

void insert(Node*& node, int x) {
	Node* tmp = node;
	while(tmp -> next != nullptr) {
		tmp = tmp -> next;
	}
	if(tmp -> next == nullptr) {
		tmp -> next = new Node(x);
	}
}

void show(Node* node) {
	cout << node -> val << " ";
	while(node -> next != nullptr) {
		node = node -> next;
		cout << node -> val << " ";
	}
}

void erase(Node* & node, int x) {
	Node* tmp = node;
	while(tmp -> next != nullptr) {
		if(tmp -> next -> val == x) {
			tmp -> next = tmp -> next -> next;	
		}
		else tmp = tmp -> next;	
	}
}

int main() {
	int n, x; cin >> n;
	Node* head = new Node();
	while(n--) {
		cin >> x;
		insert(head, x);
	}
	int m; cin >> m;
	erase(head, m);
	show(head -> next);
	return 0;
}