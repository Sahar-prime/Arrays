#include <iostream>
#include <cstdlib> // ��� ������� rand() � srand()
#include <ctime>   // ��� ������� time()

//#define RANDOM_NUMB

using namespace std;

#ifdef RANDOM_NUMB
int main()
{
    setlocale(LC_ALL, "");
    const int size = 10;
    int arr[size];

    // ������������� ���������� ��������� �����
    srand(time(0));

    // ���������� ������� ���������� ������� �� 20 �� 30
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 11 + 20; // rand() % 11 ���� ����� �� 0 �� 10, ������� ���������� 20
    }

    // ����� �������
    cout << "������ �� ��������� �����: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
#endif //RANDOM_NUMB