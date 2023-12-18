/*
//№1
#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "RUS");


	int num1, num2, num3, num4; //Объявление переменных

	cin >> num1 >> num2 >> num3 >> num4; //ввод значений для переменных
	

		if (num1 > num2) //Блок, которые сортируют числа в порядке возрастания с помощью алгоритма сортировки. (Почти пузырек)
		{
			int temp = num1;
			num1 = num2;
			num2 = temp;
		}


		if (num2 > num3)
		{
			int temp = num2;
			num2 = num3;
			num3 = temp;
		}


		if (num3 > num4)
		{
			int temp = num3;
			num3 = num4;
			num4 = temp;
		}


		if (num1 > num2)
		{
			int temp = num1;
			num1 = num2;
			num2 = temp;
		}


		if (num2 > num3)
		{
			int temp = num2;
			num2 = num3;
			num3 = temp;
		}


		if (num1 > num2)
		{
			int temp = num1;
			num1 = num2;
			num2 = temp;
		}


		if ((num4 - num3 == num3 - num2) and (num3 - num2 == num2 - num1)) //Блок условных операторов if, в котором сравниваются разности между числами,
		{
			cout << num1 << " " << num2 << " " << num3 << " " << num4 << " числитель прогрессии: " << num4 - num3; // чтобы определить, является ли последовательность арифметической прогрессией.
		}
		else if (num4 - num3 == num3 - num2)
		{
			cout << num2 << " " << num3 << " " << num4 << " числитель прогрессии: " << num4 - num3;
		}
		else if (num4 - num3 == num3 - num1)
		{ //Каждый блок условного оператора выводит числа и значение разности между ними, если условие выполнено
			cout << num1 << " " << num3 << " " << num4 << " числитель прогрессии: " << num4 - num3;
		}
		else if (num4 - num2 == num2 - num1)
		{
			cout << num1 << " " << num2 << " " << num4 << " числитель прогрессии: " << num4 - num2;
		}
		else if (num3 - num2 == num2 - num1)
		{
			cout << num1 << " " << num2 << " " << num3 << " числитель прогрессии: " << num3 - num2;
		}
		else //В блоке else выводятся числа и значение разности, если ни одно из условий не выполнено.
		{
			cout << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
			cout << "Ошибка" << endl;
		}
	
	
}


//*/

/*
//№2
#include <iostream>
#include <cmath>
using namespace std;


double function(double x, double y) //Функция вычисления значения выражения
{
	if ((y > 0) && ((x + y) > 3)) //Условие выражения, если выполняется, то ищем значение
	{
		return (log(sqrt(x + 2 * y) - exp(-y)));

	}

	else if (x + y < 0) //Условие выражения, если выполняется, то ищем значение
	{
		return ((exp(x - y) - 2 * x) / (x + y));
	}

	else //Если не подходит под условия, то выполняется третий вариант 
	{
		return (sin(x) - cos(y));
	}
}


int main()
{
	setlocale(LC_ALL, "RUS");

	double x, y;

	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;

	double result = function(x, y); //Поиск значения выражения

	cout << "Значеие выражения: " << result << endl;


}

//*/


/*
//№3
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double x, y;

	cout << "Введите x и y: ";
	cin >> x >> y;

	//Ограничения на x и y для проверки принадлежности к графику

	if (y <= 2 - 2 * pow(x, 2) && y >= 0)
	{
		cout << "Входит";
	}
	else if (y >= pow(x, 2) - 5 && y <= x + 1 && x <= -1 && y >= pow(x, 2) - 5)
	{
		cout << "Входит";
	}
	else if (y >= 0 && y <= x + 1 && x >= -1 && y >= pow(x, 2) - 5)
	{
		cout << "Входит";
	}
	else
	{
		cout << "Не входит";
	}
}

//*/

//№4
/*
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double x, y, z;

	cout << "Введите x: " << endl;
	cin >> x;

	if (0 < x && x < 2) //Обязательное условие для х
	{
		y = x - 1; //Изначальное слагаемое с которым будем работать
		z = y; //Сумма слагаемых
		int n = 1; //Знаменатель

		while (abs(y) >= pow(10, -7)) //Обязательное условие
		{
			y *= -(x - 1)*n; //Переменная каждый раз умножается на изначальное слагаемое с другим знаком
		//	n++;
			y /= ++n; //Деление на обновленный знаменатель
			z += y; //Суммируется ряд
			//n++; //Знаменатель каждый раз увеличивается на 1
		}
	}
	else //Если х не в промежутке
	{
		cout << "введите x в промежутке 0 < x < 2" << endl;
		return 0;
	}


	cout << "Z: " << z << endl;
	cout << "ln(x): " << log(x) << endl;
	cout << "Погрешность = " << log(x) - z << endl;
}

//*/
