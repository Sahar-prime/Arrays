#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2

//#define DZ
//#define UROK

#ifdef TASK_1
int main()
{
    setlocale(LC_ALL, "");
#ifdef DZ
    int decimal;
    int binary[32]; // Массив для хранения двоичных цифр


    int index = 0;

    cout << "Введите десятичное число: ";
    cin >> decimal;

    // Обработка случая, когда введено число 0
    if (decimal == 0) 
    {
        cout << "Двоичное представление: 0" << endl;
    }

    // Перевод числа в двоичное
    while (decimal > 0) 
    {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }

    // Вывод двоичного представления в обратном порядке
    cout << "Двоичное представление: ";
    for (int i = index - 1; i >= 0; --i)
    {
        cout << binary[i];
    }
    cout << endl;
#endif //DZ

#ifdef UROK
    //for (int i = 0; i < 256; i++)		cout << i << "\t" << (char)i << endl;
    int decimal;
    cout << "Введите десятичное число: "; cin >> decimal;
    const int CAPACITY = 32;	//Максимально возможная разрядность двоичного числа
    bool bin[CAPACITY] = {};
    int i = 0;
    for (; decimal; decimal /= 2)
        bin[i++] = decimal % 2;

    for (--i; i >= 0; i--)
        cout << bin[i];
    cout << endl;
#endif //UROK
}
#endif //TASK_1

#ifdef TASK_2
int main()
{
#ifdef DZ
    setlocale(LC_ALL, "");
    long long decimalNumber;
    cout << "Введите десятичное число: ";
    cin >> decimalNumber;

    // Переводим десятичное число в шестнадцатеричное
    cout << "Шестнадцатеричное представление: " << hex << decimalNumber << endl;
#endif //DZ

#ifdef UROK
    int decimal;
    cout << "Введите десятичное число: "; cin >> decimal;
    const int MAX_HEX_CAPACITY = 8;
    char hex[MAX_HEX_CAPACITY] = {};

    int i = 0;
    for (; decimal; decimal /= 16)
    {
        hex[i++] = decimal % 16 < 10 ? decimal % 16 + 48 : decimal % 16 + 55;
        //hex[i] = decimal % 16;
        //hex[i++] += hex[i] < 10 ? 48 : 55;
    }
    for (--i; i >= 0; i--)cout << hex[i];
    //for (--i; i >= 0; i--)cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
    cout << endl;
#endif //UROK
}
#endif //TASK_2

/*
Шестнадцатеричная система счисления нужна для компактной записи двоичных чисел.
Первые 10 цифр в шестнадцатеричной системе записываются также, как и в десятичной системе.
Записываются буквами латинского алфавита.
Это сделано для того, чтобы каждая цифра занимала ровно 1 разряд
Шестнадцатеричная система счисления позволяет сократить запись двоичных чисел в 4 раза, поскольку 1 Hex-разряд включает в себя 4 Bin-разряда.
В 1 байт всегда можно записать двухразрядным шестнадцатеричным числом.
*/