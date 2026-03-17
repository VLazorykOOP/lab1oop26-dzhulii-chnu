#include <iostream>
#include <vector>
using namespace std;

void task1v5() {

    vector<float> B(100);
    vector<float> A(100);
    int i, j, n = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: \n";
    for (i = 0; i < n; i++) {
        cout << "A[" << i + 1 << "] = ";
        cin >> A[i];
    }
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] != 0.0) {
            B[j] = A[i];
            j++;
        }

    }
    cout << "The non-zero elements are: \n";
    for (i = 0; i < j; i++) {
        cout << "B[" << i << "] = " << B[i] << endl;
    }
}

void task2v5() {
    int n, i, x = 0;

    bool fl = false;
    int p = -10000;//max negativ
    cout << "Enter number of elements: ";
    cin >> n;

    int* a = new int[n];

    for (i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }

    cout << "X= ";
    cin >> x;



    for (i = 0; i < n; i++) {
        if (a[i] < x) {
            break;
        }
        if (a[i] < 0) {
            if (!fl || a[i] > p) {
                fl = true;
                p = a[i];
            }

        }
    }
    if (fl) {
        cout << "Max negativ element: " << p << endl;
    }
    else cout << "No negativ element befor x" << endl;
    delete[] a;
}

void task3v5() {
    int i = 0;
    int n;
    int sum = 0;
    float avg = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int* a = new int[n];

    for (i = 0; i < (2 * n); i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }

    //avg
    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    avg = (float)sum / n;
    sum = 0;
    //sum
    for (i =n; i < (2 * n); i++) {
        if (a[i] > avg) {
            sum += a[i];
        }
    }

    cout << "result: " << sum << endl;
    //cout << "average: " << avg << endl;

    delete[] a;

}

int main()
{
    int choice;

    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "1 - Task 1" << endl;
        cout << "2 - Task 2" << endl;
        cout << "3 - Task 3" << endl;
        cout << "0 - Exit" << endl;
        cout << "Choose: ";
        cin >> choice;

        switch (choice)
        {
        case 1: task1v5(); break;
        case 2: task2v5(); break;
        case 3: task3v5(); break;
        case 0: cout << "Exit program" << endl; break;
        default: cout << "Wrong choice" << endl;
        }

    } while (choice != 0);

    return 0;
}