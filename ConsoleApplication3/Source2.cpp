//LB �6
//������� 1
//������� �1

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

	cout << "������� ����������� �������: ";
	cin >> n;

	if (n < 3) {
		cout << "�� �������� ��� �������";
		return 0;
	}

	int* Arr = new int[n + 1]; //�������� ������� 

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		int c = rand() % 20;
		Arr[i] = c;
	}

	cout << "������ � ���������� �������: [ ";
	
	for (int i = 0; i < n; i++) cout << Arr[i] << " ";
	cout << "]" << endl;

	cout << "������� ����� x: " << endl;
	cin >> x;

	for (int i = 0; i < n; i++)
	{
		if (Arr[i] == x)
		{
			k += 1;
			cout << "������ �����: " << i << endl;
		}
	}
	
	if (k == 0) cout << "����" << endl;
	cout << "���-��: " << k << endl;
	
	return 0;
}
//*/

//������� �2
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

	cout << "������� ����������� �������: ";
	cin >> n;

	if (n < 3) {
		cout << "�� �������� ��� �������";
		return 0;
	}

	int* Arr = new int[n + 1]; //�������� ������� 

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		int c = rand() % 20;
		Arr[i] = c;
	}

	cout << "������ � ���������� �������: [ ";

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

	cout << "����������� ���������� �������: [ ";
	for (int i = 0; i < n; i++) cout << Arr[i] << " ";
	cout << "]" << endl;
	return 0;
}
//*/