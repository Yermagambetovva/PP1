#include <iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    //проверка валидности координат
    if(x<0||x>7||y<0||y>7){
        cout << "Impossible" << endl;
        return 0;
    }
    //создаем доску 8х8
    char board[8][8];
    //заполняем доску символами *
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            board[i][j]='*';
        }
    }
    //отмечаем клетки которые может бить королева
    for(int i=0;i<8;++i){
        //рядф и столбцы
        if(i!=x) board[i][y]='2';
        if(i!=y) board[x][i]='2';
        //диагонали
        if(x+i<8&&y+i<8) board[x+i][y+i]='2';
        if(x-i>=0&&y-i>=0) board[x-i][y-i]='2';
        if(x+i<8&&y-i>=0) board[x+i][y-i]='2';
        if(x-i>=0&&y+i<8) board[x-i][y+i]='2';
    }
    //ставим королеву на доску после всех пометок
    board[x][y]='1';
    //выводим доску
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}