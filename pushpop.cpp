#include <iostream>
#include <stack>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to push a new node to the front of the list
Node* push(Node* head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    return newNode;
}

// Function to pop and remove the front node from the list
Node* pop(Node* head, int& poppedValue) {
    if (head == nullptr) {
        cout << "Stack is empty." << endl;
        return head;
    }
    
    Node* temp = head;
    poppedValue = temp->data;
    head = head->next;
    delete temp;
    return head;
}

// Function to display the elements of the linked list
void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    stack<int> stack;

    // Push elements onto the stack and linked list
    stack.push(20);
    head = push(head, 20);
    stack.push(30);
    head = push(head, 30);
    stack.push(40);
    head = push(head, 30);
    stack.push(40);
     head = push(head, 40);
    cout << "Linked List: ";
    display(head);
    
    cout << "Stack: ";
    while (!stack.empty()) {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
    
    // Pop elements from the linked list
    int poppedValue;
    head = pop(head, poppedValue);
    if (head != nullptr) {
        cout << "Popped value from the linked list: " << poppedValue << endl;
    }

    cout << "Linked List after pop operation: ";
    display(head);
    
    return 0;
}
