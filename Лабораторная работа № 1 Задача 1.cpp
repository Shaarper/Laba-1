#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE, "rus"); // ��� ����������� ��������
    double result;
    double f=0, z=0, a=0, b=0;
    cout << "������� �������� A" << endl;
    cin >> a;
    cout << "������� �������� B" << endl;
    cin >> b;
     z= pow (a-b,3); // ��������� ��������� Z � F
     f= pow (b,3)-3*a*pow(b,2)-3*pow(a,2)*b;
     result=z- pow (a,3)/f; // ���������� ��������
    cout << "�����: " << result; // ��������� ���������� �� �����
    return 0;
}
