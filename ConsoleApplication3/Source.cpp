/*
//������ �1

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

    cout << "������� �����: ";
    cin >> N;
    cout << "������� ������� � ������� ������ ��������� ����� �� 2 �� 16: ";
    cin >> p;

    if ((2 > p) || (N <= 0) || (p > 16))
    {
        cout << "Error";
        return 0;
    }

    while (N > 0) //��������� ����� � �������� ��
    {
        w += q[N % p];
        N = N / p;

    }
    reverse(w.begin(), w.end()); //reverse �.�. ����� ������������ ���� �� ������, � �� �����
    cout << w<<"("<< p <<")";
}

//*/

/*
//������� �2

#include <iostream>
#include <math.h>
#include <string>
#include<typeinfo> // ���������� ���������� ��� ��������� ���������� � ����� ������
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    string q;
    int p, N, otvet = 0;

    cout << "������� �����: ";
    cin >> N;
    cout << "������� ��������� �� 2 �� 16: ";
    cin >> p;

    q = to_string(N); // ����������� ����� N � ������ � ��������� � ���������� q

    for (int i = 0; size(q) > i; i++) // �������� �� ������ ����� � ������ q
    {
        string qi{q[i]}; // ���������� ��������� ����� � ��������� ���������� qi
        otvet = otvet * p + stoi(qi);  // ��������� ���������� (f(p,q,0,n-1);)
    }
    cout << otvet<< "(10)";
}
//*/





/*
//������� �3
#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    string q = "0123456789ABCDEF";
    string w, w1;
    int p, N, M;

    cout << "������� ��������� ��: ";
    cin >> p;
    cout << "������� ������ ����� � 10-������ ��: ";
    cin >> N;
    cout << "������� ������ ����� � 10-������ ��: ";
    cin >> M;

    int N1 = N;
    int M1 = M;

    while (N > 0) // ������ ����� � �������� ��
    {
        w = q[N % p] + w;
        N /= p;
    }
    while (M > 0) // ������ ����� � �������� ��
    {
        w1 = q[M % p] + w1;
        M /= p;
    }

    int mlen = max(w.length(), w1.length()); // ������������ ����� ����� �� ���� �����


    // ���������� ����� ���� �����
    w = string(mlen - w.length(), '0') + w; // string(���������� ���������� ������, ������)
    w1 = string(mlen - w1.length(), '0') + w1;


    string res = "";
    int c = 0;

    for (int i = mlen - 1; i >= 0; i--) // ������� ����� ���� ����� ���������
    {  
        int sum = q.find(w[i]) + q.find(w1[i]) + c; // ��������� ����� ������� �������� � ��������
        c = sum / p; // ��������� ����� ������� ��� ���������� �������
        res = q[sum % p] + res;
    }
    if (c > 0) res = to_string(c) + res; // ��������� ���������� �������, ���� �� ����

    cout << N1 << " + " << M1 << " = " << w << " + " << w1 <<" = " << res;
}

//*/

/*
//������� 3
#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");

    string s, w;
    string q = "0123456789ABCDEF";

    for (int i = 256; i <= 4095; i++) // ���������� ����� � ��������� [256,4095], �.�. � ����������������� ������ � ��� 3 �������� �����
    {
        int k = i;
       
        while (k > 0) // ��������� ����� � ����������������� ��
        {
            w = q[k % 16] + w;
            k /= 16;
        }
        int sum = 0;
      
        for (char c : w) // ����� ���� � ������ 
        {
            sum += c ;
        }
       
        if (sum > 35) cout << i << " " << w << endl; // ������� �����, � ������� ����� ���� ������ 35

        sum = 0;
        w = "";
    }
}

//*/

