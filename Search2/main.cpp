#include <iostream>
using namespace std;

//#define TASK_5

#ifdef TASK_5
void findDuplicates(const int array[][5], int rows)
{
    int count[16] = { 0 };

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            count[array[i][j]]++;
        }
    }

    for (int i = 0; i < 16; ++i)
    {
        if (count[i] > 1)
        {
            cout << "Value: " << i << ", Count: " << count[i] << endl;
        }
    }
}

int main()
{
    const int rows = 4;
    const int cols = 5;
    int array[rows][cols] =
    {
        {1, 2, 3, 4, 5},
        {6, 7, 0, 9, 1},
        {10, 11, 12, 13, 2},
        {14, 15, 0, 1, 3}
    };

    findDuplicates(array, rows);
}
#endif //TASK_5