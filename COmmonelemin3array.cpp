#include <iostream>
#include <vector>

void findCommonElements(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3) {
        // If the current elements in all three arrays are equal
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            // Print the common element
            std::cout << arr1[i] << " ";

            // Move to the next element in all three arrays
            i++;
            j++;
            k++;
        }
        // If the current element in the first array is smaller than the others
        else if (arr1[i] < arr2[j] && arr1[i] < arr3[k]) {
            i++;
        }
        // If the current element in the second array is smaller than the others
        else if (arr2[j] < arr1[i] && arr2[j] < arr3[k]) {
            j++;
        }
        // If the current element in the third array is smaller than the others
        else {
            k++;
        }
    }
}

int main() {
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "Common elements are: ";
    findCommonElements(arr1, arr2, arr3, n1, n2, n3);

    return 0;
}
