#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>

using namespace std;

int size = 0; // размер массива

int main()
{

    setlocale(LC_ALL, ""); // Для отображение Кирилицы, но только для русского отображения. Не будет работать при вводе русского текста в программу
    srand(time(NULL));

//---------------------------------------------------\\

    cout << "\t\t\t\t  ______________________________ \n";
    cout << "\t\t\t\t |                              |\n";
    cout << "\t\t\t\t |    Лабораторная работа № 4   |\n";
    cout << "\t\t\t\t |                              |\n";
    cout << "\t\t\t\t |          Вариант № 7         |\n";
    cout << "\t\t\t\t |                              |\n";
    cout << "\t\t\t\t |    Выполнил: Займогов В.Д.   |\n";
    cout << "\t\t\t\t |______________________________|\n\n";

//---------------------------------------------------\\

    cout << " ____________________________________________________ \n";
    cout << "|                                                    |\n";
    cout << "|         Генерация случайных чисел в массиве        |\n";
    cout << "|____________________________________________________|\n\n";


//---------------------------------------------------\\

    cout << ">> Введите размер массива: ";
    cin >> size;

//---------------------------------------------------\\

    int *array = new int[size];

    for (int i=0;i<size;i++)
    {
        array[i] = rand()%10;
    }

//---------------------------------------------------\\

    int ind = 0;
    for (int i=0; i<size; i++)
    {
        cout << array[i] << " ";
        //определение индекса последнего нулевого элемента
        if (array[i] == 0)
        {
            ind = i;
        }
    }
    cout << endl << endl;

    //удаление последнего нулевого
    for (int i = ind; i<size; i++)
    {
        array[i] = array[i+1];
    }

//---------------------------------------------------\\

    cout << " ____________________________________________________ \n";
    cout << "|                                                    |\n";
    cout << "| Идёт удаление последнего элемента, которое равно 0 |\n";
    cout << "|____________________________________________________|\n";


//---------------------------------------------------\\

    //Вывод преобразованного массива
    cout << "\n>> Преобразованный массив:\n";
    for (int i=0; i<size-1; i++)

    {
        cout << array[i] << " ";
    }
    cout << endl << endl;

//---------------------------------------------------\\

    cout << " ____________________________________________________ \n";
    cout << "|                                                    |\n";
    cout << "|        Добавление элемента 100 в массив            |\n";
    cout << "|____________________________________________________|\n\n";


//---------------------------------------------------\\

    cout << ">> Введите номер элемента, после которого \n>> вы хотите вставить элемент со значением <100>: ";
    int number;
    cin >> number;


    for (int i=size-1; i > number; i--)
    {
        array[i] = array[i-1];
    }
    array[number] = 100;


    //Вывод преобразованного массива
    cout << "\n>> Преобразованный массив:\n";
    for (int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

//---------------------------------------------------\\

    return 0;
}
