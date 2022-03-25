#include <ctime>
#include "windows.h"
#include <iostream>
using namespace std;

char sudo(char Template[9][9])
{
    //Set the seed of random numbers
    srand((unsigned)time(0));

    //Rule:
    //1.Each block has 9 numbers 1-9
    //2.Each row has 9 numbers 1-9
    //3.Each column has 9 numbers 1-9

    char matrix[9][9] =
    {
        {'1','2','3','7','8','9','4','5','6'},
        {'4','5','6','1','2','3','7','8','9'},
        {'7','8','9','4','5','6','1','2','3'},
        {'3','1','2','9','7','8','6','4','5'},
        {'6','4','5','3','1','2','9','7','8'},
        {'9','7','8','6','4','5','3','1','2'},
        {'2','3','1','8','9','7','5','6','4'},
        {'5','6','4','2','3','1','8','9','7'},
        {'8','9','7','5','6','4','2','3','1'}
    };

    //1.Change rows and columns
    int counter = 30;
    while (--counter)
    {
        int i = rand() % 3;  //big row no.
        int j = rand() % 3;  //big column no.
        int k = rand() % 2;  //0:horizontally 1:vertically

        //0:123 1:132 2:213 3:231 4:312 5:321
        switch (rand() % 6)
        {
        case 0: break; //123 
        case 1: //132
        {
            if (k == 0)
            {
                char temp;
                for (char counter = 0; counter < 9; counter++)
                {
                    temp = matrix[i * 3 + 1][counter];
                    matrix[i * 3 + 1][counter] = matrix[i * 3 + 2][counter];
                    matrix[i * 3 + 2][counter] = temp;
                }
            }
            else
            {
                char temp;
                for (char counter = 0; counter < 9; counter++)
                {
                    temp = matrix[counter][j * 3 + 1];
                    matrix[counter][j * 3 + 1] = matrix[counter][j * 3 + 2];
                    matrix[counter][j * 3 + 2] = temp;
                }
            }
        }
        break;
        case 2: //213
        {
            if (k == 0)
            {
                char temp;
                for (char counter = 0; counter < 9; counter++)
                {
                    temp = matrix[i * 3 + 0][counter];
                    matrix[i * 3 + 0][counter] = matrix[i * 3 + 1][counter];
                    matrix[i * 3 + 1][counter] = temp;
                }
            }
            else
            {
                char temp;
                for (char counter = 0; counter < 9; counter++)
                {
                    temp = matrix[counter][j * 3 + 0];
                    matrix[counter][j * 3 + 0] = matrix[counter][j * 3 + 1];
                    matrix[counter][j * 3 + 1] = temp;
                }
            }
        }
        break;
        case 3: //231
        {
            if (k == 0)
            {
                char temp;
                for (char counter = 0; counter < 9; counter++)
                {
                    temp = matrix[i * 3 + 0][counter];
                    matrix[i * 3 + 0][counter] = matrix[i * 3 + 1][counter];
                    matrix[i * 3 + 1][counter] = matrix[i * 3 + 2][counter];
                    matrix[i * 3 + 2][counter] = temp;
                }
            }
            else
            {
                char temp;
                for (char counter = 0; counter < 9; counter++)
                {
                    temp = matrix[counter][j * 3 + 0];
                    matrix[counter][j * 3 + 0] = matrix[counter][j * 3 + 1];
                    matrix[counter][j * 3 + 1] = matrix[counter][j * 3 + 2];
                    matrix[counter][j * 3 + 2] = temp;
                }
            }
        }
        break;
        case 4: //312
        {
            if (k == 0)
            {
                char temp;
                for (char counter = 0; counter < 9; counter++)
                {
                    temp = matrix[i * 3 + 2][counter];
                    matrix[i * 3 + 2][counter] = matrix[i * 3 + 1][counter];
                    matrix[i * 3 + 1][counter] = matrix[i * 3 + 0][counter];
                    matrix[i * 3 + 0][counter] = temp;
                }
            }
            else
            {
                char temp;
                for (char counter = 0; counter < 9; counter++)
                {
                    temp = matrix[counter][j * 3 + 2];
                    matrix[counter][j * 3 + 2] = matrix[counter][j * 3 + 1];
                    matrix[counter][j * 3 + 1] = matrix[counter][j * 3 + 0];
                    matrix[counter][j * 3 + 0] = temp;
                }
            }
        }
        break;
        case 5: //321
        {
            if (k == 0)
            {
                char temp;
                for (char counter = 0; counter < 9; counter++)
                {
                    temp = matrix[i * 3 + 0][counter];
                    matrix[i * 3 + 0][counter] = matrix[i * 3 + 2][counter];
                    matrix[i * 3 + 2][counter] = temp;
                }
            }
            else
            {
                char temp;
                for (char counter = 0; counter < 9; counter++)
                {
                    temp = matrix[counter][j * 3 + 0];
                    matrix[counter][j * 3 + 0] = matrix[counter][j * 3 + 2];
                    matrix[counter][j * 3 + 2] = temp;
                }
            }
        }
        break;
        }
    }

    //2.Change the numbers
    counter = 10;
    while (--counter)
    {
        int tempa = rand() % 9 + 1;
        int tempb;
        do
        {
            tempb = rand() % 9 + 1;
        } while (tempb == tempa);

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (matrix[i][j] == tempa)
                {
                    matrix[i][j] = tempb;
                }
                else if (matrix[i][j] == tempb)
                {
                    matrix[i][j] = tempa;
                }
            }
        }
    }

    //{ //Print the matrix 正确答案（调试用）
    //    cout << "_____________________________________" << endl;
    //    for (int i = 0; i < 9; i++)
    //    {
    //        for (int j = 0; j < 9; j++)
    //        {
    //            cout << "| " << matrix[i][j] << " ";
    //        }
    //        cout << "|" << endl << endl;
    //    }
    //}

    //形参赋值实参
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {

            Template[i][j] = matrix[i][j];

        }
    }
    return 0;
}

char grid(char gr[9][9])
{
    while (1)
    {
        cout << "██████████████████████" << endl << "█  ";
        for (int k = 1; k < 10; k++) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
                BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY |
                FOREGROUND_RED);
            cout << ' ' << k;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
                BACKGROUND_GREEN | BACKGROUND_BLUE);

            cout << "  ";
        }

        cout << "  █" << endl << "█ ╔═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╗  █" << endl;

        for (int i = 0, k = 1; i < 9; i++, k++)//游戏界面棋盘
        {
            cout << "█";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
                BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY |
                FOREGROUND_RED);
            cout << k;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
                BACKGROUND_GREEN | BACKGROUND_BLUE);
            for (int j = 0; j < 9; j++)
            {
                cout << "║ " << gr[i][j] << " ";
            }
            cout << "║  " << "█" << endl;
            if (i < 8)
            {
                cout << "█ ╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣  █" << endl;
            }
        }
        cout << "█ ╚═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╝  █" << endl;
        cout << "██████████████████████" << endl;
        break;
    }
    return 0;
}