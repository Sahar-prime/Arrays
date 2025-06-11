#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2

#ifdef TASK_1
int main()
{
    setlocale(LC_ALL, "");
    int decimalNumber;
    int binary[32]; // Массив для хранения двоичных цифр
    int index = 0;

    cout << "Введите десятичное число: ";
    cin >> decimalNumber;

    // Обработка случая, когда введено число 0
    if (decimalNumber == 0) 
    {
        cout << "Двоичное представление: 0" << endl;
    }

    // Перевод числа в двоичное
    while (decimalNumber > 0) 
    {
        binary[index++] = decimalNumber % 2;
        decimalNumber /= 2;
    }

    // Вывод двоичного представления в обратном порядке
    cout << "Двоичное представление: ";
    for (int i = index - 1; i >= 0; --i)
    {
        cout << binary[i];
    }
    cout << endl;
}
#endif //TASK_1

#ifdef TASK_2
int main()
{
    setlocale(LC_ALL, "");
    long long decimalNumber;
    cout << "Введите десятичное число: ";
    cin >> decimalNumber;

    // Переводим десятичное число в шестнадцатеричное
    cout << "Шестнадцатеричное представление: " << hex << decimalNumber << endl;
}
#endif //TASK_2