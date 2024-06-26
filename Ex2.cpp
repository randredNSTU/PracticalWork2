#include <iostream>

using namespace std;

// Структура для представления пары целых чисел
struct Pair {
    int first, second; // Поля для первого и второго элементов пары

    // Конструктор структуры Pair
    Pair(int first, int second) : first(first), second(second) {}
};

// Функция для нахождения модулярного обратного числа
Pair modInverse(int c, int m) {
    Pair u(m, 0); // Инициализируем пару (m, 0)
    Pair v(c, 1); // Инициализируем пару (c, 1)
    while (v.first) { // Пока второй элемент пары v не равен нулю
        int q = u.first / v.first; // Находим частное от деления первого элемента пары u на первый элемент пары v
        Pair t(u.first % v.first, u.second - q * v.second); // Вычисляем новую пару (u % v, u - q * v)
        u = v; // Обновляем пару u
        v = t; // Обновляем пару v
    }
    if (u.second < 0) // Если второй элемент пары u отрицательный
        u.second += m; // Добавляем m к второму элементу пары u
    return u; // Возвращаем пару u
}

int main() {
    setlocale(LC_ALL, "russian"); // Устанавливаем локаль для корректного вывода сообщений на русском языке
    int c, m;
    cout << "Введите c: "; // Выводим приглашение для ввода пользователем c
    cin >> c; // Читаем значение c

    cout << "Введите m: "; // Выводим приглашение для ввода пользователем m
    cin >> m; // Читаем значение m

    Pair result = modInverse(c, m); // Вызываем функцию modInverse для нахождения модулярного обратного числа

    if (result.first == 1) // Если первый элемент результата равен 1
        cout << "d = " << result.second << endl; // Выводим модулярное обратное число d
    else
        cout << "d не существует, так как c и m - не взаимно простые числа" << endl; // Выводим сообщение о том, что модулярное обратное число не существует

    return 0;
}
