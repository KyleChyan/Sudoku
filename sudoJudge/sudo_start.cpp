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
    cout << "*            ★数☆独★Sudoku☆         *" << endl;
    cout << "*****************************************" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
        BACKGROUND_GREEN | BACKGROUND_BLUE);

}

void intro()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
        BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY |
        FOREGROUND_BLUE);

    cout << "┍━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┑" << endl;
    cout << "│游戏全程依靠键盘操作，分别以行，列，数 │" << endl;
    cout << "│的方式输入。例如：                     │" << endl;
    cout << "│第一行第一列填写3，则输入1 1 3；       │" << endl;
    cout << "│即：1，空格，1，空格，3，回车；        │" << endl;

    cout << "┕━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
        BACKGROUND_GREEN | BACKGROUND_BLUE);
    cout << "输入对应数字来运行" << endl;
    cout << setw(20) << "①开始游戏" << endl;
    cout << setw(20) << "②离开游戏" << endl;
}