#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; ++i) {
        arr[size - 1 - i] = i;
    }
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
