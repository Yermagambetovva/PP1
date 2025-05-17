#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, rooks;
    cin >> n >> rooks;
    
    // Инициализация доски (все клетки заняты)
    vector<vector<int> > board(n, vector<int>(n, 1));
    
    vector<long long> free_area(rooks);
    
    // Обработка каждой ладьи
    for (int i = 0; i < rooks; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        
        // Преобразуем координаты в индексы с нуля
        x1--; x2--;
        
        // Размещаем ладью (помечаем клетку как занятую)
        board[x1][x2] = 2;
        
        // Помечаем все клетки в том же ряду и колонке как занятые
        for (int j = 0; j < n; j++) {
            if (board[x1][j] != 2) board[x1][j] = 0; // строка
            if (board[j][x2] != 2) board[j][x2] = 0; // колонка
        }
        
        // Подсчитываем количество свободных клеток (значение 1)
        long long area = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (board[j][k] == 1) area++; // клетка свободна
            }
        }
        
        // Сохраняем количество свободных клеток для текущей ладьи
        free_area[i] = area;
    }

    // Выводим результат для каждой ладьи
    for (int i = 0; i < rooks; i++) {
        cout << free_area[i] << " ";
    }

    return 0;
}
