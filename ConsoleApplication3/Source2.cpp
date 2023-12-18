//LB №6
//Вариант 1
//Задание №1

/*
using namespace std;
#include <iostream>
#include <time.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int k = 0;
	int x;

	cout << "Введите размерность массива: ";
	cin >> n;

	if (n < 3) {
		cout << "Не подходит под условие";
		return 0;
	}

	int* Arr = new int[n + 1]; //Создание массива 

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		int c = rand() % 20;
		Arr[i] = c;
	}

	cout << "Массив с рандомными числами: [ ";
	
	for (int i = 0; i < n; i++) cout << Arr[i] << " ";
	cout << "]" << endl;

	cout << "Введите число x: " << endl;
	cin >> x;

	for (int i = 0; i < n; i++)
	{
		if (Arr[i] == x)
		{
			k += 1;
			cout << "Индекс равен: " << i << endl;
		}
	}
	
	if (k == 0) cout << "Нема" << endl;
	cout << "Кол-во: " << k << endl;
	
	return 0;
}
//*/

//Задание №2
/*
using namespace std;
#include <iostream>
#include <time.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int k = 0;
	int x;

	cout << "Введите размерность массива: ";
	cin >> n;

	if (n < 3) {
		cout << "Не подходит под условие";
		return 0;
	}

	int* Arr = new int[n + 1]; //Создание массива 

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		int c = rand() % 20;
		Arr[i] = c;
	}

	cout << "Массив с рандомными числами: [ ";

	for (int i = 0; i < n; i++) cout << Arr[i] << " ";
	cout << "]" << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < (n - 1); j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				int b = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = b;
			}
		}
	}

	cout << "Пузырьковая сортировка массива: [ ";
	for (int i = 0; i < n; i++) cout << Arr[i] << " ";
	cout << "]" << endl;
	return 0;
}
//*/