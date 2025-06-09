#include <iostream>
using namespace std;

//#define UROK

#ifdef UROK
int main() 
{
    setlocale(LC_ALL, "");
    // Инициализация массива
    int arr[] = { 0, 1, 2, 2, 0, 5, 0, 7, 2, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Массив для подсчета количества повторений
    int count[10] = { 0 }; // Предполагаем, что числа в массиве от 0 до 9

    // Подсчет количества повторений каждого элемента
    for (int i = 0; i < size; ++i) {
        count[arr[i]]++;
    }

    // Поиск и вывод повторяющихся элементов
    bool hasDuplicates = false;
    for (int i = 0; i < 10; ++i) {
        if (count[i] > 1) {
            cout << "Число " << i << " повторяется " << count[i] << " раз(а)." << endl;
            hasDuplicates = true;
        }
    }

    if (!hasDuplicates) {
        cout << "Повторяющихся элементов нет." << endl;
    }
}
#endif //UROK