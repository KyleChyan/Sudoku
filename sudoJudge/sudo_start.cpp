#include "windows.h"
#include <iostream>
#include <iomanip>
using namespace std;
void start()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
        BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY |
        FOREGROUND_RED);

    cout << "*****************************************" << endl;
    cout << "*            ���������Sudoku��         *" << endl;
    cout << "*****************************************" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
        BACKGROUND_GREEN | BACKGROUND_BLUE);

}

void intro()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
        BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY |
        FOREGROUND_BLUE);

    cout << "����������������������������������������������������������������������������������" << endl;
    cout << "����Ϸȫ���������̲������ֱ����У��У��� ��" << endl;
    cout << "���ķ�ʽ���롣���磺                     ��" << endl;
    cout << "����һ�е�һ����д3��������1 1 3��       ��" << endl;
    cout << "������1���ո�1���ո�3���س���        ��" << endl;

    cout << "����������������������������������������������������������������������������������" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
        BACKGROUND_GREEN | BACKGROUND_BLUE);
    cout << "�����Ӧ����������" << endl;
    cout << setw(20) << "�ٿ�ʼ��Ϸ" << endl;
    cout << setw(20) << "���뿪��Ϸ" << endl;
}