#include <bits/stdc++.h>
#define MAXN 20000005
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;


typedef long long ll;

// head trỏ đến nút đầu tiên của DSLK
// Con trỏ node *tmp = head
// tmp và head đều trỏ đến cùng một nút trong danh sách liên kết.
// Duyệt tmp không làm thay đổi head
// Mà chỉ làm thay đổi DSLK
// Khi đó head trỏ đến nút đầu, nội dung của DSLK thay đổi theo tmp
// Khi dùng head duyệt qua DSLK sẽ thấy sự thay đổi

struct node {
	int data;
	node* next;
};

node* makeNode(int x) {
	node* newNode = new node;
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void duyet(node* head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

int size(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt++;
		head = head->next;
	}
	return cnt;
}

void pushFront(node*& head, int x) { // con trỏ trỏ tới địa chỉ của head
	node* newNode = makeNode(x);
	newNode->next = head;
	head = newNode;
}

void pushBack(node*& head, int x) {
	node* newNode = makeNode(x);
	if (head == NULL) { // Nếu head==NULL thì tạo head = newNode
		head = newNode;
		return;
	}
	node* tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

void Insert(node*& head, int k, int x) {
	int n = size(head);
	if (k < 1 || k > n + 1) return;
	if (k == 1) pushFront(head, x);
	node* tmp = head;
	for (int i = 1; i < k - 1; i++) {
		tmp = tmp->next;
	}
	node* newNode = makeNode(x);
	newNode->next = tmp->next;
	tmp->next = newNode;
}

void popFront(node*& head) {
	if (head == NULL) return;
	node* tmp = head;
	head = tmp->next;
	delete tmp;
}

void popBack(node*& head) {
	if (head == NULL) return;
	if (head->next == NULL) {
		delete head; head = NULL;
		return;
	}
	node* tmp = head;
	while (tmp->next->next != NULL) {
		tmp = tmp->next;
	}
	node* last = tmp->next;
	tmp->next = NULL;
	delete last;
}

void Erase(node*& head, int k) {
	int n = size(head);
	if (k<1 || k>n) return;
	if (k == 1) popFront(head);
	else {
		node* tmp = head;
		for (int i = 1; i <= k - 2; i++) {
			tmp = tmp->next;
		}
		// tmp: k - 1
		node* tmp2 = tmp->next;
		tmp->next = tmp2->next;
		delete tmp2;
	}
}

void Sort(node*& head) {
	for (node* i = head; i != NULL; i = i->next) {
		node* minNode = i;
		for (node* j = i->next; j != NULL; j = j->next) {
			if (minNode->data > j->data) {
				minNode = j;
			}
		}
		int tmp = minNode->data;
		minNode->data = i->data;
		i->data = tmp;
	}
}

int main() {
	node* head = NULL;
	for (int i = 1; i <= 10; i++) {
		pushBack(head, i);
	}
	Insert(head, 5, 20);
	duyet(head);
	return 0;
}