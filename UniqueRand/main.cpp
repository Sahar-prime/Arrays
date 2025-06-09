#include <iostream>
#include <cstdlib> // Для функций rand() и srand()
#include <ctime>   // Для функции time()
using namespace std;

//#define RANDOM_NUMB

#ifdef RANDOM_NUMB
int main()
{
    setlocale(LC_ALL, "");
    const int size = 10;
    int arr[size];

    // Инициализация генератора случайных чисел
    srand(time(0));

    // Заполнение массива случайными числами от 20 до 30
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 11 + 20; // rand() % 11 дает числа от 0 до 10, поэтому прибавляем 20
    }

    // Вывод массива
    cout << "Массив из случайных чисел: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
#endif //RANDOM_NUMB