
#include <iostream>
#include <iomanip>
using namespace std;

// Заповнення масиву рекурсивно
void inputArray(int a[], int n, int i = 0)
{
    if (i == n)
        return;

    cin >> a[i];
    inputArray(a, n, i + 1);
}

// Виведення масиву рекурсивно
void printArray(const int a[], int n, int i = 0)
{
    if (i == n)
        return;

    cout << setw(5) << a[i];
    printArray(a, n, i + 1);
}

// Пошук індексу найменшого елемента
int findMinIndex(const int a[], int n)
{
    if (n == 1)
        return 0;

    int minIndex = findMinIndex(a, n - 1);

    if (a[n - 1] < a[minIndex])
        return n - 1;

    return minIndex;
}

// Пошук індексу найбільшого елемента
int findMaxIndex(const int a[], int n)
{
    if (n == 1)
        return 0;

    int maxIndex = findMaxIndex(a, n - 1);

    if (a[n - 1] > a[maxIndex])
        return n - 1;

    return maxIndex;
}

int main()
{
    int a[100];
    int n;

    cout << "Enter array size (1-100): ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    cout << "Enter array elements: ";
    inputArray(a, n);

    cout << "Array:" << endl;
    printArray(a, n);
    cout << endl;

    int minIndex = findMinIndex(a, n);
    int maxIndex = findMaxIndex(a, n);

    cout << "Minimum element: " << a[minIndex] << endl;
    cout << "Minimum index: " << minIndex << endl;

    cout << "Maximum element: " << a[maxIndex] << endl;
    cout << "Maximum index: " << maxIndex << endl;

    return 0;
}
