﻿//Варіант 11:визначити чи належить точка заштрихованій частині площини
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "UKR");//українська мова
    double x;//оголошення змінної х
    double y;//оголошення змінної у
    cout << "Введiть координату х:";cin >> x;//введення координати х
    cout << "Введiть координату у:";cin >> y;//введення координати у
    if ((y > x / 2) && ((x - 2) * (x - 2) + y * y <= 4))//умова,за якої точка належить заштрихованій частині площини
        cout << "точка належить заштрихованiй частинi площини";//виведення результату
    else//інакше(коли точка не належить заштрихованій заштрихованій частині площини)
        cout << "точка не належить заштрихованiй частинi площини";//результат
}

