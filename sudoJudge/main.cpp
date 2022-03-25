#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
#include "windows.h"
#include <iomanip>
using namespace std;
char sudo(char Template[9][9]);

char sudo(char Template[9][9]);
void start();
void intro();
char grid(char gr[9][9]);

int main()
{
    system("title 数独Sudoku");//设置cmd窗口标题
    int li = 0, ro = 0, llii=0, rroo= 0;    //定义输入行，列
    int ent;    //主界面命令
    char x;     //输入字符
    int check = 0;      
    char origin[9][9] = { '0' };        //正确答案模板
    char basic[9][9] = { ' ' };         //用户互动模板
    sudo(origin);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            basic[i][j] = origin[i][j];
        }
    }
    
    //basic[0][0] = ' ';//（调试用）
    basic[1][2] = ' ';
    basic[3][8] = ' ';
    basic[4][7] = ' ';
    basic[5][1] = ' ';
    basic[6][3] = ' ';
    basic[7][6] = ' ';
    basic[8][8] = ' ';
    basic[6][4] = ' ';
    basic[2][1] = ' ';
    basic[6][0] = ' ';
    
    system("color F0");
    start();
    intro();
    
    for (;;)
    {
        cin >> ent;
        if (ent == 1)
        {

            system("cls");
            start();
            grid(basic);

            //check and input
            while (1)
            {
                cout << "请依次键入“行 列 数”，以空格分开：" << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
                    BACKGROUND_GREEN | BACKGROUND_BLUE |
                    FOREGROUND_BLUE | FOREGROUND_GREEN);
                cin >> llii >> rroo >> x;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
                    BACKGROUND_GREEN | BACKGROUND_BLUE);
                li = llii - 1;      //li为实际行，llii为用户输入行
                ro = rroo - 1;      //ro为实际列，rroo为用户输入列

                while (1)
                {
                    if (origin[li][ro] == x)
                    {
                        basic[li][ro] = x;
                        system("cls");
                        start();
                        grid(basic);
                        cout << "输入正确！继续加油！" << endl;
                        break;
                    }

                    else
                    {
                        cout << "输入有误" << endl;
                        break;
                    }
                }
            }
            for (int i = 0, check = 0; i < 9; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    if (origin[i][j] == basic[i][j])
                        check += 1;
                }
                if (check >= 81)
                {
                    cout << "干得漂亮！你成功破解了整张数独" << endl;
                    system("pause");
                    exit(1);
                }
            }

        }
        else if (ent == 2)
            
            exit(1);
        else
            cout << "输入有误，请重新输入" << endl;
    }
}