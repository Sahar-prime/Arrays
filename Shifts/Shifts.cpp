#include <iostream>
using namespace std;

//#define SHIFTS

void shiftLeft(int arr[], int size) 
{
    int temp = arr[0];
    for (int i = 0; i < size - 1; ++i) 
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

void shiftRight(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; --i)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

#ifdef SHIFTS
int main() 
{
    setlocale(LC_ALL, "");
    const int size = 10;
    int arr[size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // Циклический сдвиг влево на 1 позицию
    shiftLeft(arr, size);

    cout << "Массив после сдвига влево: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Циклический сдвиг вправо на 1 позицию
    shiftRight(arr, size);

    cout << "Массив после сдвига вправо: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
#endif //SHIFTS