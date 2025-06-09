#include <iostream>
using namespace std;

//#define UROK

#ifdef UROK
int main()
{
    setlocale(LC_ALL, "");
    // Инициализация массива
    int arr[] = { 110, 11, 22, 335, 110, 335, 0, 77, 22, 0, 110 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Предполагаем, что максимальное значение в массиве не превышает 335
    int count[336] = { 0 }; // Массив для подсчета количества повторений

    // Подсчет количества повторений каждого элемента
    for (int i = 0; i < size; ++i) 
    {
        count[arr[i]]++;
    }

    // Поиск и вывод повторяющихся элементов
    bool hasDuplicates = false;
    for (int i = 0; i <= 335; ++i) 
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