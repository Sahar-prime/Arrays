#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define ARRAYS_2
//#define UROK

#define tab "\t"
#define delimiter "\n-------------------------------\n"
#define ARRAYS_2D_BASICS
//#define SHIFTS
//#define COLUMNS_SHIFT
//#define CROSS_CUTTING_SHIFT

#ifdef UROK
void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 10;
	const int COLS = 10;
	int arr[ROWS][COLS] =
	{
		{  0, 1, 2, 3, 4, 5, 6, 7, 8, 9 },
		{ 10,11,12,13,14,15,16,17,18,19 },
		{ 20,21,22,23,24,25,26,27,28,29 },
	};

#ifdef ARRAYS_2D_BASICS
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
		cout << endl;
	}

	//Ñóììà ýëåìåíòîâ äâóìåðíîãî ìàññèâà:
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "Ñóììà ýëåìåíòîâ ìàññèâà: " << sum << endl;
	cout << "Ñðåäíåå-àðèôìåòè÷åñêîå:  " << (double)sum / ROWS / COLS << endl;

	//Ïîèñê ìèíèìàëüíîãî è ìàêñèìàëüíîãî çíà÷åíèÿ â ìàññèâå:
	int min, max;
	min = max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	cout << "Ìèíèìàëüíîå çíà÷åíèå â ìàññèâå: " << min << endl;
	cout << "Ìàêñèìàëüíîå çíà÷åíèå â ìàññèâå: " << max << endl;

	//Ñîðòèðîâêà ìàññèâà:
	int iterrations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//arr[i][j] - âûáðàííûé ýëåìåíò;
					//arr[k][l] - ïåðåáèðàåìûé ýëåìåíò;
					iterrations++;
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "Êîëè÷ñòâî èòåðàöèé: " << iterrations << endl;
	cout << "Êîëè÷ñòâî îáìåíîâ: " << exchanges << endl;

	//Âûâîä îòñîðòèðîâàííîãî ìàññèâà:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
		cout << endl;
	}
#endif // ARRAYS_2D_BASICS

#ifdef SHIFTS
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
		cout << endl;
	}
	cout << delimiter << endl;

	int number_of_shifts;
	cout << "Ââåäèòå êîëè÷åñòâî ñäâèãîâ: "; cin >> number_of_shifts;

#ifdef COLUMNS_SHIFT
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			int buffer = arr[i][0];
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			arr[i][COLS - 1] = buffer;
		}
	}
#endif // COLUMNS_SHIFT

#ifdef CROSS_CUTTING_SHIFT
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			if (i != ROWS - 1)arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
#endif // CROSS_CUTTING_SHIFT



	//Âûâîä ñäâèíóòîãî ìàññèâà:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
		cout << endl;
	}
#endif // SHIFTS
}
#endif //UROK

#ifdef ARRAYS_2
void main() 
{
	setlocale(LC_ALL, "");
	const int ROWS = 5;
	const int COLS = 8;
	int arr[ROWS][COLS] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) 
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
		cout << endl;
	}
	
	//Сумма элементов двумерного массива:
	int sum = 0;
	for (int i = 0; i < ROWS; i++) 
	{
		for (int j = 0; j < COLS; j++) 
		{
			sum += arr[i][j];
		}
	}
	cout << "Сумма элементов двумерного массива: " << sum << endl;
	cout << "Средне-арифметическое: " << sum / ROWS / COLS << endl;
}
#endif //ARRAYS_2

/*
Двумерные массивы представляют собой таблицу однотипных значений.
Как и в любой другой таблице, у двумерного массива есть строки и столбики.
Столбики часто называют элементами массив.
Как и строки, как и элементы строки двумерного массива нумеруются с нуля.
Строки, так и элементы строк расположены в памяти подряд, одна за другой.
Следовательно, двумерный статический массив, так и одномерный статический массив занимают непрерывную область памяти.
При объявлении массива сразу задаётся кол-во строк, а потом кол-во столбцов.
И то, и другое можно задать только целочисленным константным значениям.

*/