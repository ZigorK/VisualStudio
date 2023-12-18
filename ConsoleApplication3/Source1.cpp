//Задание №1
/*
#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	unsigned int n;
	unsigned int res;
	const int maxbits = 32; // максмально доступное для системы 

	cout << "Введите целое число n: ";
	cin >> n;

	if (n < 0 || n > maxbits)
	{
		cout << "Число не подхоит под условия, попробуйте снова" << endl;
		return 0;
	}

	res = 1 << n;

	cout << "2^" << n << " в десятичной СС: " << res << endl;
	cout << "2^" << n << " в восьмеричной СС: "<< oct << res << endl;
	cout << "2^" << n << " в шестнадцатеричной СС: " << hex << res << endl;

	return 0;
}
//*/

//Задание №2
/*
#include <iostream>
using namespace std;

int main()
{
	unsigned int z, x, с;
	setlocale(LC_ALL, "RUS");

	cout << "Введите число и номер бита: ";
	cin >> x >> с;

	if (с > 32 || с < 0) 
	{
		cout << "Число не подхоит под условия, попробуйте снова";
		return 0;
	}

	z = 1 & (x >> с);
	cout << z;
}
//*/

//Задание №3
/*
#include <iostream>
using namespace std;

int main()
{
	unsigned int z, x, c;
	setlocale(LC_ALL, "RUS");

	cout << "Введите число и номер бита: ";
	cin >> x >> c;

	if (c > 32 || c < 0) 
	{
		cout << "Число не подхоит под условия, попробуйте снова";
		return 0;
	}

	z = 1 << c;
	x = x | z;
	cout <<" в десятичной СС: " << x << endl;
	cout <<" в восьмеричной СС: " << oct << x << endl;
	cout <<" в шестнадцатеричной СС: " << hex << x << endl;
}
//*/

//Задание №4
/*
#include <iostream>
using namespace std;
int main()
{
	unsigned int z, x, c;
	setlocale(LC_ALL, "RUS");
	cout << "Введите число и номер бита: ";
	cin >> x >> c;

	if (c > 32 || c < 0) 
	{
		cout << "Число не подхоит под условия, попробуйте снова";
		return 0;
	}

	z =~(1 << c);
	x = x & z;
	cout << " в десятичной СС: " << x << endl;
	cout << " в восьмеричной СС: " << oct << x << endl;
	cout << " в шестнадцатеричной СС: " << hex << x << endl;
}
//*/

//Задание №5
//*
#include <iostream>
using namespace std;
int main()
{
	unsigned int z, x, c;
	setlocale(LC_ALL, "RUS");

	cout << "Введите число и номер бита: ";
	cin >> x >> c;

	if (c > 32 || c < 0) 
	{
		cout << "Ошибка";
		return 0;
	}

	x = x ^ (1 << c);
	cout << " в десятичной СС: " << x << endl;
	cout << " в восьмеричной СС: " << oct << x << endl;
	cout << " в шестнадцатеричной СС: " << hex << x << endl;
}
//*/

//Задание №6
/*
#include <iostream>
using namespace std;

int main()
{
	unsigned int X, Y, M, z = 0;
	setlocale(LC_ALL, "Russian");

	cout << "Введите 2 числа и длину маски ";
	cin >> X;
	cout << "Число X в двоичной СС ";

	for (int i = 7; i >= 0; i--) {
		if (X & (1 << i))
			cout << "1";
		else cout << "0";
	}

	cout << endl;
	cin >> Y >> M;

	if (M < 0 || M>32) 
	{
		cout << "Ошибка";
		return 0;
	}

	X = X >> M;
	X = X << M;

	for (int i = M - 1; i >= 0; i--) 
	{
		z = 1 & (Y >> i);
		if (z == 1) {
			X = X | (1 << i);
		}
	}

	cout << "Число Y в двоичной СС ";

	for (int i = 7; i >= 0; i--) 
	{
		if (Y & (1 << i))
			cout << "1";
		else cout << "0";
	}

	cout << endl;
	cout << "Результирующий X в двоичной СС ";

	for (int i = 7; i >= 0; i--) 
	{
		if (X & (1 << i))
			cout << "1";
		else cout << "0";
	}
}
*/

//Задание №7
/*
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	unsigned int x;

	cout << "Введите число: ";
	cin >> x;
	cout <<'\t' << "|дес" << '\t' << "| восм" << '\t' << "| hex" << '\t' << "| двоичный" << endl;
	cout << "x=" <<'\t' << "|" << dec << x <<'\t' << "|" << oct << x <<'\t' << "|" << hex << x <<'\t'<< "|";

	for (int i = 15; i >= 0; i--) 
	{
		if (x & (1 << i))
			cout << "1";
		else cout << "0";
	}

	cout << endl;
	cout << "x+1=" <<'\t' << "|" << dec << (x + 1) <<'\t' << "|" << oct << (x + 1) <<'\t' << "|" << hex << (x + 1) <<'\t' << "|";

	for (int i = 15; i >= 0; i--) 
	{
		if ((x + 1) & (1 << i))
			cout << "1";
		else cout << "0";
	}
}
//*/

//Задание №8


/*
using namespace std;
#include <iostream>

int main() {
	setlocale(LC_ALL, "RUS");
	unsigned int x, y;

	cout << "Введите числа: ";
	cin >> x >> y;
	cout << '\t' << "|дес" << '\t' << "| восм" << '\t' << "| hex" << '\t' << "| двоичный" << endl;
	cout << "x=" << '\t' << "|" << dec << x << '\t' << "|" << oct << x << '\t' << "|" << hex << x << '\t' << "|";

	for (int i = 15; i >= 0; i--)
	{
		if (x & (1 << i))
			cout << "1";
		else cout << "0";
	}

	cout << endl;
	cout << "y=" << '\t' << "|" << dec << y << '\t' << "|" << oct << y << '\t' << "|" << hex << y << '\t' << "|";
	for (int i = 15; i >= 0; i--)
	{
		if (y & (1 << i))
			cout << "1";
		else cout << "0";
	}

	cout << endl;
	cout << "x+y=" << '\t' << "|" << dec << (x + y) << '\t' << "|" << oct << (x + y) << '\t' << "|" << hex << (x + y) << '\t' << "|";

	for (int i = 15; i >= 0; i--)
	{
		if ((x + y) & (1 << i))
			cout << "1";
		else cout << "0";
	}
}
//*/

//Задание №9

/*
using namespace std;
#include <iostream>

int main() 
{
	setlocale(LC_ALL, "RUS");
	signed int x;
	int y;
	cout << "Введите число: ";
	cin >> x;
	
	y = abs(x);

	cout << "y=" << '\t' << "|" << dec << y << '\t' << "|" << oct << y << '\t' << "|" << hex << y << '\t' << "|";
	for (int i = 15; i >= 0; i--)
	{
		if (y & (1 << i))
			cout << "1";
		else cout << "0";
	}
}
//*/

//Задание №10

/*
using namespace std;
#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	signed int x;
	unsigned int y;
	bool z;
	cout << "Введите число: ";
	cin >> x; 

	z = x;
	y = abs(x);

	cout << "y=" << '\t' << "|" << dec << y << '\t' << "|" << oct << y << '\t' << "|" << hex << y << '\t' << "|";
	for (int i = 15; i >= 0; i--)
	{
		if (y & (1 << i))
			cout << "1";
		else cout << "0";
	}
}
//*/