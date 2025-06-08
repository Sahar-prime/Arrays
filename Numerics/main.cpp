#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2

#ifdef TASK_1
int main()
{
    setlocale(LC_ALL, "");
    int decimalNumber;
    int binary[32]; // ������ ��� �������� �������� ����
    int index = 0;

    cout << "������� ���������� �����: ";
    cin >> decimalNumber;

    // ��������� ������, ����� ������� ����� 0
    if (decimalNumber == 0) 
    {
        cout << "�������� �������������: 0" << endl;
    }

    // ������� ����� � ��������
    while (decimalNumber > 0) 
    {
        binary[index++] = decimalNumber % 2;
        decimalNumber /= 2;
    }

    // ����� ��������� ������������� � �������� �������
    cout << "�������� �������������: ";
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
    cout << "������� ���������� �����: ";
    cin >> decimalNumber;

    // ��������� ���������� ����� � �����������������
    cout << "����������������� �������������: " << hex << decimalNumber << std::endl;
}
#endif //TASK_2