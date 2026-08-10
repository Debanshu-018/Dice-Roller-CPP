//Q1.PRINT "HELLO WORLD" IN C++.
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}


//Q2.Input two numbers and print their sum.
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << a + b;

    return 0;
}

//Q3.Find the largest of three numbers.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "Largest = " << a;
    else if (b >= a && b >= c)
        cout << "Largest = " << b;
    else
        cout << "Largest = " << c;

    return 0;
}


//Q4.Check whether a number is even or odd.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
