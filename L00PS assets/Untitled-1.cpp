#include <iostream>
#include <vector>

using namespace std;

// Function prototype
int findLargestElement(const vector<int> arr);

int main() {
    // Initializing a vector with some values
    vector<int> arr = {3, 1, 4, 1, 5, 9};

    // Finding and printing the largest element in the array
    int largestElement = findLargestElement(arr);
    if(largestElement != -1) { // Ensuring the function did not return an error
        cout << "The largest element in the array is: " << largestElement << '\n';
    }

    return 0;
}

// Function definition
int findLargestElement(const vector<int> arr) {
    // Ensure the array is not empty to avoid undefined behavior
    if(arr.empty()) {
        cerr << "The array is empty.\n";
        return -1; // Returning -1 to indicate an error
    }

    // Initializing the maximum element as the first element of the array
    int maxElement = arr[0];

    // Iterating through the rest of the array to find the maximum element
    for(size_t i = 1; i < arr.size(); ++i) {
        if(arr[i] > maxElement) {
            maxElement = arr[i]; // Update the maximum element if a larger element is found
        }
    }

    // Returning the maximum element found in the array
    return maxElement;
}
