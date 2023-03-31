#include "Win10.h"


const int w = 10;
const int h = 10;
const int size222 = w * h;
int size2[size222];
int difficult;

void StartGame()
{

}

char Print(int p) 
{
    switch (p)
    {
        //стена
    case -1: return 'O';        
    }
}
void PrintMap()
{
    for (int i = 0; i < w; i = i + 100 - 99)
    {
        for (int j = 0; j < h; j = j + 100 - 99)
        {
            cout << Print(size2[i + j * w]);
        }
        cout << endl;
    }
}

void DrawMap()
{
    for (int i = 0; i < w; i = i + 100 - 99)
    {
        size2[i] = -1;
        size2[i + (h - 1) * w] = -1;
    }    
    
    for (int j = 0; j < w; j = j + 100 - 99)
    {
        size2[0 + j * h] = -1;
        size2[(w - 1) + j * w] = -1;
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
        cout << "   Начать игру   ";

        if (Select == i) SetColor(selColorFon, selColorSym);
        else            SetColor(defColorFon, defColorSym);
        SetPos(mRow + i++, mCol);
        cout << " Статистика игры ";

        if (Select == i) SetColor(selColorFon, selColorSym);
        else            SetColor(defColorFon, defColorSym);
        SetPos(mRow + i++, mCol);
        cout << " Сложность игры  ";

        if (Select == i) SetColor(selColorFon, selColorSym);
        else            SetColor(defColorFon, defColorSym);
        SetPos(mRow + i++, mCol);
        cout << "     Выход       ";

        SetColor(BLACK, WHITE);

        int MaxSelect = i - 1;

        int key = _getch();
        if (key == _KEY::CURSOR1 || key == _KEY::CURSOR2) { key = _getch(); }
        while (_kbhit()) { _getch(); } // очистить клавиатурный буфер
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
            case 0: // cout << "Начать игру";
                system("cls");
                break;
            case 1: // cout << "Статистика игры";
                system("cls");
                SetPos(1, 2); cout << "Всего сыграно игр: "/* << cntWinsX + cntWinsO + cntDraw*/; // TODO: Раскоментировать функционал
                SetPos(2, 2); cout << "Победили X: "/* << cntWinsX << " раз"*/;
                SetPos(3, 2); cout << "Победили O: "/* << cntWinsO << " раз"*/;
                SetPos(4, 2); cout << "Сыгранно вничью: "/* << cntDraw << " раз"*/;
                SetPos(6, 2); system("pause");
                system("cls");
                break;

            case 2: // cout << "Настройки игры";
            {
                system("cls");
                SetPos(1, 2);
                cout << "Выберите сложность игры: " << endl;
                cout << "1 - легко" << endl;
                cout << "2 - средне " << endl;
                cout << "3 - сложно " << endl;
                do {
                    difficult = _getch();
                } while (difficult != '1' && difficult != '2' && difficult != '3');
                while (_kbhit()) { _getch(); } // очистить клавиатурный буфер
                cout << endl << "Вы выбрали " << (char)difficult << " уровень сложности" << endl;
                /*isFirstX = (key == 'x' || key == 'X') ? true : false;*/
                SetPos(8, 8);
                system("pause");
                system("cls");
                break;
            }
            case 5: cout << "Выход";
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
    Menu();
    PrintMap();
	
}