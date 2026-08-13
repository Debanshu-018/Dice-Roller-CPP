// Q1. Find Maximum and Minimum Element.
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


// Q2.Reverse an Array.
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

// 3. Find the Second Largest Element.
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

// Q4. Remove Duplicates from a Sorted Array.
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

// Q5. Find the Missing Number.
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

// Q6.Find Frequency of Each Element.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2, 4};
    int n = 7;

    bool visited[7] = {false};

    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " -> " << count << endl;
    }

    return 0;
}

// Q7.Merge Two Sorted Arrays.
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};

    int n = 4;
    int m = 4;

    int c[8];

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];

    cout << "Merged array: ";

    for (int x = 0; x < k; x++)
        cout << c[x] << " ";

    return 0;
}

















