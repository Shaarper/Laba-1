#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//---------------------------1
void func01(string str, int amoun, double bal)
{
    cout << "Экзамен: " << str << "\tКоличество студентов: " << amoun << "\tСредний балл: " << bal << endl;
}
void func02(string str = "Математика", int amoun = 30, double bal = 4)
{
    cout << "Экзамен: " << str << "\tКоличество студентов: " << amoun << "\tСредний балл: " << bal << endl;
}
void func03(string str, int amoun = 30, double bal = 4)
{
    cout << "Экзамен: " << str << "\tКоличество студентов: " << amoun << "\tСредний балл: " << bal << endl;
}


//---------------------------2
void func11(int amoun, ...)
{
    int min = 0;
    int number;
    int* p = &amoun;
    min = *p;
    while (amoun != 0)
    {
        number = *(++p);
        if (amoun % 2 == 0) {

            if (min > number) {
                min = number;
            }
        }
        amoun--;
    }
    cout << min << endl;
}

//---------------------------3
int* inclusionSort(int* num, int size)
{
    for (int i = 1; i < size; i++)
    {
        int value = num[i];
        int index = i;
        while ((index > 0) && (num[index - 1] > value))
        {
            num[index] = num[index - 1];
            index--;
        }
        num[index] = value;
    }
    return num;
}

double* inclusionSort(double* num, double size)
{
    for (int i = 1; i < size; i++)
    {
        double value = num[i];
        int index = i;
        while ((index > 0) && (num[index - 1] > value))
        {
            num[index] = num[index - 1];
            index--;
        }
        num[index] = value;
    }
    return num;
}

//---------------------------4
template <typename T>
T* inclusionSort2(T* num, T size)
{
    for (int i = 1; i < size; i++)
    {
        T value = num[i];
        int index = i;
        while ((index > 0) && (num[index - 1] > value))
        {
            num[index] = num[index - 1];
            index--;
        }
        num[index] = value;
    }
    return num;
}

//---------------------------5
typedef float(*fptr)(float);//тип-указатель на функцию уравнения

float root(fptr f, float a, float b, float e)
{
    float x;
    do
    {
        x = (a + b) / 2; //находим середину отрезка
        if ((*f)(a) * f(x) < 0) //выбираем отрезок
            b = x;
        else a = x;
    }
    while ((*f)(x) > e && fabs(a - b) > e);
    return x;
}

//функция, для которой ищется корень

float testf(float x)
{
    return x * x - 1;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
    setlocale(LC_ALL, "Russian"); // Для отображение Кирилицы

 //---------------------------1
   
   string str;
    int amoun;
    double bal;

    cout << "ВВедите экзамен\n";
    cin >> str;
    cout << "ВВедите количество сдающий студентов\n";
    cin >> amoun;
    cout << "ВВедите средний балл\n";
    cin >> bal;

    func01(str, amoun, bal);
    func02();
    func03("Русский");

 //---------------------------2
    func11(5, 1, 3, 4, 7, 6);
    func11(8, 1, 3, 4, 7, 6, 5, 8, 10);
    func11(3, 1, 4, 6);

//----------------------------3
    int arr[10] = { 1, 3, 4, 2, 5, 8, 10, 7, 9, 6 };
    int index = 10;
    int *test = inclusionSort(arr, index);
    double arr2[10] = { 1, 3.3, 4.2, 2.6, 5, 8.7, 10, 7, 9.9, 6 };
    double* test2 = inclusionSort(arr2, index);
    for (int i = 0; i < 10; i++)
    {
        cout << test[i] << " | ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << test2[i] << " | ";
    }
    cout << "\n\n";

//----------------------------4
    int arr3[10] = { 1, 3, 4, 2, 5, 8, 10, 7, 9, 6 };
    int index = 10;
    double arr4[10] = { 1, 3.3, 4.2, 2.6, 5, 8.7, 10, 7, 9.9, 6 };
    int* test3 = inclusionSort2<int>(arr3, index);
    double* test4 = inclusionSort2<double>(arr4, index);
    for (int i = 0; i < 10; i++)
    {
        cout << test3[i] << " | ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << test4[i] << " | ";
    }
}

