#include "Win10.h"


const int w = 20;
const int h = 50;
int difficult;

void StartGame()
{

}


void PrintMap(int map[w][h], Snake snake)
{
    map[snake.headY][snake.headX] = 2;

    for (int i = 0; i < w; i++) {
        map[i][0] = 1; // ����� �����
        map[i][h - 1] = 1; // ������ �����
    }
    for (int j = 0; j < h; j++) {
        map[0][j] = 1; // ������� �����
        map[w - 1][j] = 1; // ������ �����
    }
    for (int i = 0; i < w; i++)
    {
        for (int  j = 0; j < h; j++)
        {
            if (map[i][j] == 0)
                cout << ' '; // ������ ����
            else if (map[i][j] == 1)
                cout << '#'; // �����
            else if (map[i][j] == 2)
                cout << '='; // ����
            else if (map[i][j] == 3)
                cout << '@'; // ���

        }
        cout << endl;
    }

    for (int i = 1; i < snake.lenth; i++)
    {
        int bodyX = snake.headX - i;
        int bodyY = snake.headY;
        map[bodyY][bodyX] = 2;
    }

}

void MoveSnake(Snake& snake, int direction)
{
    int prevHeadX = snake.headX;
    int prevHeadY = snake.headY;

    switch (direction) {
    case UP:
        snake.headY--;
        break;
    case DOWN:
        snake.headY++;
        break;
    case LEFT:
        snake.headX--;
        break;
    case RIGHT:
        snake.headX++;
        break;
    }

    for (int i = 1; i < snake.lenth; i++) {
        int prevBodyX = snake.headX[i].x;
        int prevBodyY = snake.headY[i].y;
        snake.headX[i].x = prevHeadX;
        snake.headY[i].y = prevHeadY;
        prevHeadX = prevBodyX;
        prevHeadY = prevBodyY;
    }

}

void Menu()
{
    system("cls");
    int mRow = 4, mCol = 8;
    int Select = 0;
    int selColorFon = _COLOR::WHITE;
    int selColorSym = _COLOR::BLUE;
    int defColorFon = BLACK;

    int defColorSym = LIGHT_YELLOW;
    for (;;) {
        int i = 0;

        if (Select == i) SetColor(selColorFon, selColorSym);
        else            SetColor(defColorFon, defColorSym);
        SetPos(mRow + i++, mCol);
        cout << "   ������ ����   ";

        if (Select == i) SetColor(selColorFon, selColorSym);
        else            SetColor(defColorFon, defColorSym);
        SetPos(mRow + i++, mCol);
        cout << " ���������� ���� ";

        if (Select == i) SetColor(selColorFon, selColorSym);
        else            SetColor(defColorFon, defColorSym);
        SetPos(mRow + i++, mCol);
        cout << " ��������� ����  ";

        if (Select == i) SetColor(selColorFon, selColorSym);
        else            SetColor(defColorFon, defColorSym);
        SetPos(mRow + i++, mCol);
        cout << "     �����       ";

        SetColor(BLACK, WHITE);

        int MaxSelect = i - 1;

        int key = _getch();
        if (key == _KEY::CURSOR1 || key == _KEY::CURSOR2) { key = _getch(); }
        while (_kbhit()) { _getch(); } // �������� ������������ �����
        switch (key)
        {
        case _KEY::UP:
        case _KEY::LEFT:
            if (Select > 0) Select--;
            else Select = MaxSelect;
            break;

        case _KEY::DOWN:
        case _KEY::RIGHT:
            if (Select < MaxSelect) Select++;
            else Select = 0;
            break;

        case _KEY::ENTER:
        {
            switch (Select)
            {
            case 0: // cout << "������ ����";
                system("cls");
/*TODO */    /* PrintMap();*/  // ��� �������� �������� map � �������
                break;
            case 1: // cout << "���������� ����";
                system("cls");
/*TODO */       SetPos(1, 2); cout << "������ :"/* <<maxscore << endl*/; // ���� �������� ����������?
                SetPos(2, 2); system("pause");
                system("cls");
                break;

            case 2: // cout << "��������� ����";
            {
                system("cls");
                SetPos(1, 2);
                cout << "�������� ��������� ����: " << endl;
                cout << "1 - �����" << endl;
                cout << "2 - ������ " << endl;
                cout << "3 - ������ " << endl;
                do {
                    difficult = _getch();
                } while (difficult != '1' && difficult != '2' && difficult != '3');
                while (_kbhit()) { _getch(); } 
                cout << endl << "�� ������� " << (char)difficult << " ������� ���������" << endl;
                SetPos(8, 8);
                system("pause");
                system("cls");
                break;
            }
            case 5: cout << "�����";
                exit(0);
                system("pause > nul");
       
            break;
            }

        } 

        case _KEY::ESC:
            exit(0);
            break;

        }
    }
    cin.get(); cin.get();
}




int main()
{
    setlocale(LC_ALL, "Rus");
	
    int map[w][h] = {};
    map[0][0] = 1;
    map[0][1] = 1;
    map[0][2] = 1;
    map[3][4] = 3;

    /*Menu();*/
    Snake snake;
    snake.headX = 7;
    snake.headY = 7;
    snake.lenth = 3;
    PrintMap(map, snake);
    

	
}