#include <iostream>
#include <vector>

using namespace std;

void countingSort(vector<int>& arr) {
    if (arr.empty()) return;

    // Find the maximum element in the array
    int max_val = arr[0];
    for (int val : arr) {
        if (val > max_val) {
            max_val = val;
        }
    }

    // Create a counting array with size equal to the maximum element
    vector<int> count(max_val + 1, 0);

    // Count the occurrences of each element
    for (int val : arr) {
        count[val]++;
    }

    // Reconstruct the sorted array
    int idx = 0;
    for (int i = 0; i <= max_val; i++) {
        while (count[i] > 0) {
            arr[idx] = i;
            idx++;
            count[i]--;
        }
    }
}

int main() {
    vector<int> arr;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    countingSort(arr);

    cout << "Sorted array: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
