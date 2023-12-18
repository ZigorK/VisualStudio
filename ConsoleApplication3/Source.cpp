/*
//Задане №1

#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");

    string q = "0123456789ABCDEF";
    string w;
    int p, N;

    cout << "Введите число: ";
    cin >> N;
    cout << "Введите систему в которую хотите перевести число от 2 до 16: ";
    cin >> p;

    if ((2 > p) || (N <= 0) || (p > 16))
    {
        cout << "Error";
        return 0;
    }

    while (N > 0) //переводим число в введённую СС
    {
        w += q[N % p];
        N = N / p;

    }
    reverse(w.begin(), w.end()); //reverse т.к. цифры записывались друг за другом, а не перед
    cout << w<<"("<< p <<")";
}

//*/

/*
//Задание №2

#include <iostream>
#include <math.h>
#include <string>
#include<typeinfo> // Подключаем библиотеку для получения информации о типах данных
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    string q;
    int p, N, otvet = 0;

    cout << "Введите число: ";
    cin >> N;
    cout << "Введите основание СС 2 до 16: ";
    cin >> p;

    q = to_string(N); // Преобразуем число N в строку и сохраняем в переменной q

    for (int i = 0; size(q) > i; i++) // Проходим по каждой цифре в строке q
    {
        string qi{q[i]}; // Записываем отдельную цифру в строковую переменную qi
        otvet = otvet * p + stoi(qi);  // Выполняем вычисления (f(p,q,0,n-1);)
    }
    cout << otvet<< "(10)";
}
//*/





/*
//Задание №3
#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    string q = "0123456789ABCDEF";
    string w, w1;
    int p, N, M;

    cout << "Введите основание СС: ";
    cin >> p;
    cout << "Введите первое число в 10-тичной СС: ";
    cin >> N;
    cout << "Введите второе число в 10-тичной СС: ";
    cin >> M;

    int N1 = N;
    int M1 = M;

    while (N > 0) // первое число в введённую СС
    {
        w = q[N % p] + w;
        N /= p;
    }
    while (M > 0) // второе число в введённую СС
    {
        w1 = q[M % p] + w1;
        M /= p;
    }

    int mlen = max(w.length(), w1.length()); // максимальная длина числа из двух чисел


    // уравниваем длины двух чисел
    w = string(mlen - w.length(), '0') + w; // string(количество повторений строки, строка)
    w1 = string(mlen - w1.length(), '0') + w1;


    string res = "";
    int c = 0;

    for (int i = mlen - 1; i >= 0; i--) // считаем сумму двух чисел столбиком
    {  
        int sum = q.find(w[i]) + q.find(w1[i]) + c; // Вычисляем сумму текущих разрядов и переноса
        c = sum / p; // Вычисляем новый перенос для следующего разряда
        res = q[sum % p] + res;
    }
    if (c > 0) res = to_string(c) + res; // Добавляем оставшийся перенос, если он есть

    cout << N1 << " + " << M1 << " = " << w << " + " << w1 <<" = " << res;
}

//*/

/*
//Вариант 3
#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");

    string s, w;
    string q = "0123456789ABCDEF";

    for (int i = 256; i <= 4095; i++) // перебираем числа в диапазоне [256,4095], т.к. в шестнадцатиричной записи в них 3 значащих цифры
    {
        int k = i;
       
        while (k > 0) // переводим число в шестнадцатиричную СС
        {
            w = q[k % 16] + w;
            k /= 16;
        }
        int sum = 0;
      
        for (char c : w) // сумма цифр в строке 
        {
            sum += c ;
        }
       
        if (sum > 35) cout << i << " " << w << endl; // выводим числа, в которых сумма цифр больше 35

        sum = 0;
        w = "";
    }
}

//*/

