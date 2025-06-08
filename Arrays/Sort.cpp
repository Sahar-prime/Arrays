#include <iostream>
using namespace std;

//#define SORT

#ifdef SORT
int main()
{
    setlocale(LC_ALL, "");
    int arr[] = { 5, 1, 7, 3, 4, 0, 6, 2, 8, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Сортировка пузырьком
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1]) {
                // Обмен значениями
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Вывод отсортированного массива
    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
#endif //SORT