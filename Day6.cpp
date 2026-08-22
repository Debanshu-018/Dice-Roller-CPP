// Q1.Check if Array is Sorted
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    bool sorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}

// Q2. Find Minimum Element
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;

    int mini = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < mini)
            mini = arr[i];
    }

    cout << "Minimum = " << mini;

    return 0;
}

// Q3. Reverse an Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int left = 0, right = n - 1;

    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}



















