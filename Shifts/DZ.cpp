#include <iostream>
using namespace std;

//#define DZ

#ifdef DZ
int main()
{
    setlocale(LC_ALL, "");
    // Инициализация массива
    int arr[] = { 10, 1, 2, 3, 0, 3, 7, 2, 10, 10, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Предполагаем, что максимальное значение в массиве не превышает 10
    int count[11] = { 0 }; // Массив для подсчета количества повторений

    // Подсчет количества повторений каждого элемента
    for (int i = 0; i < size; ++i) 
    {
        count[arr[i]]++;
    }

    // Поиск и вывод повторяющихся элементов
    bool hasDuplicates = false;
    for (int i = 0; i <= 11; ++i) 
    {
        if (count[i] > 1) {
            cout << "Число " << i << " встречается " << count[i] << " раз(а)." << endl;
            hasDuplicates = true;
        }
    }

    if (!hasDuplicates) 
    {
        cout << "Повторяющихся элементов нет." << endl;
    }

}
#endif //UROK