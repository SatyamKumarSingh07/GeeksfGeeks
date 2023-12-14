#include <iostream>
using namespace std;

class TwoStacks {
private:
    int* arr;
    int size;
    int top1;
    int top2;

public:
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1; // Initialize top of the first stack
        top2 = size; // Initialize top of the second stack
    }

    ~TwoStacks() {
        delete[] arr;
    }

    void push1(int value) {
        if (top1 < top2 - 1) {
            arr[++top1] = value;
        } else {
            cout << "Stack 1 is full. Cannot push." << endl;
        }
    }

    void push2(int value) {
        if (top1 < top2 - 1) {
            arr[--top2] = value;
        } else {
            cout << "Stack 2 is full. Cannot push." << endl;
        }
    }

    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        } else {
            cout << "Stack 1 is empty." << endl;
            return -1;
        }
    }

    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        } else {
            cout << "Stack 2 is empty." << endl;
            return -1;
        }
    }
};

int main() {
    TwoStacks ts(6);

    ts.push1(1);
    ts.push1(2);
    ts.push1(3);
    ts.push2(4);
    ts.push2(5);
    ts.push2(6);

    cout << "Popped from stack 1: " << ts.pop1() << endl;
    cout << "Popped from stack 2: " << ts.pop2() << endl;

    return 0;
}
