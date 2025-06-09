#include <iostream>
using namespace std;

//#define UROK

#ifdef UROK
int main() 
{
    setlocale(LC_ALL, "");
    // ������������� �������
    int arr[] = { 0, 1, 2, 2, 0, 5, 0, 7, 2, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // ������ ��� �������� ���������� ����������
    int count[10] = { 0 }; // ������������, ��� ����� � ������� �� 0 �� 9

    // ������� ���������� ���������� ������� ��������
    for (int i = 0; i < size; ++i) {
        count[arr[i]]++;
    }

    // ����� � ����� ������������� ���������
    bool hasDuplicates = false;
    for (int i = 0; i < 10; ++i) {
        if (count[i] > 1) {
            cout << "����� " << i << " ����������� " << count[i] << " ���(�)." << endl;
            hasDuplicates = true;
        }
    }

    if (!hasDuplicates) {
        cout << "������������� ��������� ���." << endl;
    }
}
#endif //UROK