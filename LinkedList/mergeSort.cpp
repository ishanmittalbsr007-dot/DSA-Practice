#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
public:
    node* head;
    node* tail;

    list() {
        head = NULL;
        tail = NULL;
    }

    void Push_back(int val) {
        node* newnode = new node(val);

        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }
};

void printList(node* head) {
    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Split the list into two halves
node* splitAtMid(node* head) {
    node* slow = head;
    node* fast = head;
    node* prev = NULL;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (prev != NULL)
        prev->next = NULL;

    return slow;
}

// Merge two sorted linked lists
node* merge(node* left, node* right) {
    list ans;

    while (left != NULL && right != NULL) {
        if (left->data <= right->data) {
            ans.Push_back(left->data);
            left = left->next;
        } else {
            ans.Push_back(right->data);
            right = right->next;
        }
    }

    while (left != NULL) {
        ans.Push_back(left->data);
        left = left->next;
    }

    while (right != NULL) {
        ans.Push_back(right->data);
        right = right->next;
    }

    return ans.head;
}

// Merge Sort
node* mergeSort(node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    node* rightHead = splitAtMid(head);

    node* left = mergeSort(head);
    node* right = mergeSort(rightHead);

    return merge(left, right);
}

int main() {
    list ll;

    ll.Push_back(5);
    ll.Push_back(4);
    ll.Push_back(3);
    ll.Push_back(2);

    cout << "Original List:\n";
    printList(ll.head);

    ll.head = mergeSort(ll.head);

    cout << "Sorted List:\n";
    printList(ll.head);

    return 0;
}