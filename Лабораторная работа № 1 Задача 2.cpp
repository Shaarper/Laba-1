#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus"); // Для отображения Кириллицы
    double m=0, n=0;
    double result=0;

//---------------------------------------------------\\

    cout << "  ______________________________ " << endl;
    cout << " |                              |" << endl;
    cout << " |    Лабораторная работа № 1   |" << endl;
    cout << " |          Задача  № 2         |" << endl;
    cout << " |          Вариант № 7         |" << endl;
    cout << " |                              |" << endl;
    cout << " |    Выполнил: Займогов В.Д.   |" << endl;
    cout << " |______________________________|" << endl;
    cout << endl;

//---------------------------------------------------\\

    cout << "> Введите значение m" << endl;
    cout << "> ";
    cin >> m;
    cout << endl;

    cout << "> Введите значение n" << endl;
    cout << "> ";
    cin >> n;
    cout << endl << endl;

 //=================Начало выражения================\\
//---------------------------------------------------\\

    cout << "  Решение первого выражения" << endl;
    cout << "Выражение: m+--n" << endl;
     result=m+--n;
    cout << "Ответ: " << result << endl;
    cout << endl;

//---------------------------------------------------\\

    cout << "  Решение второго выражения" << endl;
    cout << "Выражение: m++<==n" << endl;
     result=(m++<++n);
    cout << "Ответ: " << result << endl;
    cout << endl;

//---------------------------------------------------\\

    cout << "  Решение третьего выражения" << endl;
    cout << "Выражение: n--< --m" << endl;
     result=(n--< --m);
    cout << "Ответ: " << result << endl;
    cout << endl;

    return 0;
}
