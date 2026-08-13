// Q1. Find Maximum and Minimum Element
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum)
            maximum = arr[i];

        if (arr[i] < minimum)
            minimum = arr[i];
    }

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;

    return 0;
}


// Q2.Reverse an Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// 3. Find the Second Largest Element
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest = " << secondLargest;

    return 0;
}

// Q4. Remove Duplicates from a Sorted Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = 8;

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i <= j; i++)
        cout << arr[i] << " ";

    return 0;
}
// Q5. Find the Missing Number
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
        sum += arr[i];

    cout << "Missing number = " << total - sum;

    return 0;
}



















