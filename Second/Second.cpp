// Second.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _USE_MATH_DEFINES

#include <iostream>;
#include <stdlib.h>;
#include <cmath>;

const double pi = M_PI;

using namespace std;
/*
double firstV(double r, double rm, double h) {
    double v = (1.0 / 3.0) * pi * h * (pow(r, 2) + r * rm + pow(rm, 2));
    return v;
}
double firstS(double r, double rm, double l) {
    double s = pi * (pow(r, 2) + (r + rm) * l + pow(rm, 2));
    return s;
}

double razvetvitel(double x, double a) {
    double w = 0;
    if (abs(x) < 1)
        w = a * log(abs(x));
    if (abs(x) >= 1)
        w = sqrt(a - pow(x, 2));
    return w;
}

double function(double x, double y, double b) {
    double z = log(b - y) * sqrt(b - x);
    return z;
}
*/
void poryadok(int n) {
    for (int i = 2; i < 12; i++) {
        cout << n * i + i-1 << endl;
        
    }
}
/*/
void tabu(double min, double max) {
     for (double x = min; x <= max; x += 0.5) {
       double y = (pow(x, 2) - 2 * x + 2) / (x - 1);
           if (x == 1.0) {
                  cout << "Невозможно делить 0, значение х=1 будет пропущено!" << endl;
                  continue;
              }
              cout << "х = " << x << ' ' << "у = " << y << endl;
          }
      }
      */
int main()
{
    setlocale(LC_ALL, "RUS");
    /*
    double r, rm, h, l;
    cout << "Для вычисления объема усеченного конуса по формуле:" << '\n';
    cout << "V = 1/3*pi*h*(R^2+Rr+r^2" << '\n';
    cout << "Введите радиус первого основания(R): " << '\n';
    cin >> r;
    if (r <= 0)
        return -1;
    cout << "Введите радиус второго основания(r): " << endl;
    cin >> rm; 
    if (rm <= 0)
        return -1;
    cout << "Введите высоту(h): " << '\n';
    cin >> h;
    if (h <= 0)
        return -1;
    cout << "Для вычисления площади поверхности усеченного конуса по формуле:" << '\n';
    cout << "S = pi*(R^2+(R+r)*l+r^2" << '\n';
    cout << "Введите образующую(l): " << '\n';
    cin >> l;
    if (l <= 0)
        return -1;
    double v = firstV(r, rm, h);
    double s = firstS(r, rm, l);
    cout << "Объем равен: " << v << '\n';
    cout << "Площадь поверхности равна: " << s << '\n';

    system("Pause");

    double x, a;
    cout << "Введите x и a для вычисления w по формуле" << endl;
    cout << "Обратите внимание, что корень не может быть получен из отрицательного числа!" << endl;
    cout << "w = {a*ln|x|, |x| <= 1" << endl;
    cout << "    {sqrt(a-x^2), |x| >= 1" << endl;
    cout << "x: " << endl;
    cin >> x;
    cout << "a:" << endl;
    cin >> a;
    if (a - pow(x, 2) >= 0) {
        double w = razvetvitel(x, a);
        cout << w << endl;    
    }
    else
    {
        cout << "При введенных х и а выражение a-x^2 < 0, невозможно получить корень из отрицательного числа. Введите другие значения!" << endl;
    }

    system("Pause");

    double x1, y, b;
    cout << "Для введенных произвольно x, y и b вычислим функцию z = ln(b-y)*sqrt(b-x)" << endl;
    cout << "Помните, что при натуральном логарифме аргумент должен быть больше 0, а при корне - больше либо равен 0" << endl;
    cout << "Введите х: " << endl;
    cin >> x;
    cout << "Введите у: " << endl;
    cin >> y;
    cout << "Введите b: " << endl;
    cin >> b;
    if (b - y > 0 and b - x >= 0) {
        double z = function(x, y, b);
        cout << z << endl;
    }
    else
        cout << "Получены значения, которые невозможно вычислить! Проверьте введенные данные." << endl;

    system("Pause");
    */
    double n;
    cout << "Введите любое число N, на экран будут выведены 10 чисел в возрастающем порядке после него: " << endl;
    cin >> n;
    poryadok(n);
    system("Pause");
    /*
    cout << "При нажатии любой кнопки будет вызвана последняя функиця - табуляция. Она протабулирует функию" << endl;
    cout << "y = (x^2 - 2*x + 2)/(x-1)" << endl;
    cout << "от значения -4 до 4 с шагом в 0.5 единиц" << endl;

    system("Pause");

    double x2, min, max;
    x2 = -4.0;
    min = -4.0;
    max = 4.0;
    tabu(min, max);

    system("Pause");
    */
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
