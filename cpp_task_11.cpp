// 1. Создать две переменные и определить «расстояние» между ними в памяти.Расстояние показать в переменных того же типа(вычесть из одного указателя другой).Затем показать расстояние в байтах.

/*
#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    int a = 5;
    int* pa = &a;

    int b = 25;
    int* pb = &b;

    int distance = pb - pa;
    int distance_bites = distance * sizeof(int);

    cout << "Значение первой переменны: " << *pa << "\n";
    cout << "Значение второй переменны: " << *pb << "\n";
    cout << "Расстояние между переменными в байтах: " << distance_bites << " байт" << "\n";
}
*/

// 2. Пользователь вводит число, оно показывается в 2, 3 и 4 степени.Подсчёты осуществляются с помощью указателей.

/*
#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    int number;
    cout << "Введите число: ";
    cin >> number;

    int* pnumber = &number;

    int second_cube = (*pnumber) * (*pnumber);
    int third_cube = (*pnumber) * (*pnumber) * (*pnumber);
    int fourth_cube = (*pnumber) * (*pnumber) * (*pnumber) * (*pnumber);

    cout << "Число в второй степени: " << second_cube << "\n";
    cout << "Число в третьей степени: " << third_cube << "\n";
    cout << "Число в четвертой степени: " << fourth_cube << "\n";
}
*/

// 3. Через указатели на указатели посчитать сумму двух чисел и записать в третье.

/*
#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    int a = 5;
    int* pa = &a;

    int b = 25;
    int* pb = &b;

    int sum;
    int* psum = &sum;
    *psum = *pa + *pb;

    cout << "Первое число: " << *pa << "\n";
    cout << "Второе число: " << *pb << "\n";
    cout << "В общее число: " << *psum << "\n";
}
*/