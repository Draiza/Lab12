#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstring>
using namespace std;


int main()
{
    //1
    setlocale(LC_ALL, "Russian");
    wcout.imbue(locale(".1251"));
    wcin.imbue(locale(".866"));
    int a, b, n;
    char c[20];
    /*
    cin >> a >> b;

    switch (a)
    {
    case 1:
        cout << "первое ";
        break;
    case 2:
        cout << "второе ";
        break;
    case 3:
        cout << "третье ";
        break;
    case 4:
        cout << "четвёртое ";
        break;
    case 5:
        cout << "пятое ";
        break;
    case 6:
        cout << "шестое ";
        break;
    case 7:
        cout << "седьмое ";
        break;
    case 8:
        cout << "восьмое ";
        break;
    case 9:
        cout << "девятое ";
        break;
    case 10:
        cout << "десятое ";
        break;
    case 11:
        cout << "одиннадцатое ";
        break;
    case 12:
        cout << "двенадцатое ";
        break;
    case 13:
        cout << "тринадцатое ";
        break;
    case 14:
        cout << "четырнадцатое ";
        break;
    case 15:
        cout << "пятнадцатое ";
        break;
    case 16:
        cout << "шестнадцатое ";
        break;
    case 17:
        cout << "семнадцатое ";
        break;
    case 18:
        cout << "восемнадцатое ";
        break;
    case 19:
        cout << "девятнадцатое ";
        break;
    case 20:
        cout << "двадцатое ";
        break;
    case 21:
        cout << "двадцать первое ";
        break;
    case 22:
        cout << "двадцать второе ";
        break;
    case 23:
        cout << "двадцать третье ";
        break;
    case 24:
        cout << "двадцать четвёртое ";
        break;
    case 25:
        cout << "двадцать пятое ";
        break;
    case 26:
        cout << "двадцать шестое ";
        break;
    case 27:
        cout << "двадцать седьмое ";
        break;
    case 28:
        cout << "двадцать восьмое ";
        break;
    case 29:
        cout << "двадцать девятое ";
        break;
    case 30:
        cout << "тридцатое ";
        break;
    case 31:
        cout << "тридцать первое ";
        break;
    }

    switch (b)
    {
    case 1:
        cout << "января" << endl;
        break;
    case 2:
        cout << "февраля" << endl;
        break;
    case 3:
        cout << "марта" << endl;
        break;
    case 4:
        cout << "апреля" << endl;
        break;
    case 5:
        cout << "мая" << endl;
        break;
    case 6:
        cout << "июня" << endl;
        break;
    case 7:
        cout << "июля" << endl;
        break;
    case 8:
        cout << "августа" << endl;
        break;
    case 9:
        cout << "сентября" << endl;
        break;
    case 10:
        cout << "октября" << endl;
        break;
    case 11:
        cout << "ноября" << endl;
        break;
    case 12:
        cout << "декабря" << endl;
        break;
    }

    //2
    cin >> c >> n;

    switch (n)
    {
    case 0:
        cout << c << endl;
        break;
    case 1:
        if (strcmp(c, "N") == 0) {
            cout << "W" << endl;
        }
        if (strcmp(c, "S") == 0) {
            cout << "E" << endl;
        }
        if (strcmp(c, "E") == 0) {
            cout << "N" << endl;
        }
        if (strcmp(c, "W") == 0) {
            cout << "S" << endl;
        }
        break;
    case -1:
        if (strcmp(c, "N") == 0) {
            cout << "E" << endl;
        }
        if (strcmp(c, "S") == 0) {
            cout << "W" << endl;
        }
        if (strcmp(c, "E") == 0) {
            cout << "S" << endl;
        }
        if (strcmp(c, "W") == 0) {
            cout << "N" << endl;
        }
        break;
    }

    //3
    cin >> a;
    switch (a)
    {
    case 10:
        cout << "Десять учебных заданий";
        break;
    case 11:
        cout << "Одиннадцать учебных заданий";
        break;
    case 12:
        cout << "Двенадцать учебных заданий";
        break;
    case 13:
        cout << "Тринадцать учебных заданий";
        break;
    case 14:
        cout << "Четырнадцать учебных заданий";
        break;
    case 15:
        cout << "Пятнадцать учебных заданий";
        break;
    case 16:
        cout << "Шестнадцать учебных заданий";
        break;
    case 17:
        cout << "Семнцадцать учебных заданий";
        break;
    case 18:
        cout << "Восемнадцать учебных заданий";
        break;
    case 19:
        cout << "Девятнадцать учебных заданий";
        break;
    case 20:
        cout << "Двадцать учебных заданий";
        break;
    case 21:
        cout << "Двадцать одно учебное задание";
        break;
    case 22:
        cout << "Двадцать два учебных задания";
        break;
    case 23:
        cout << "Двадцать три учебных задания";
        break;
    case 24:
        cout << "Двадцать четыре учебных задания";
        break;
    case 25:
        cout << "двадцать пять учебных заданий";
        break;
    case 26:
        cout << "двадцать шесть учебных заданий";
        break;
    case 27:
        cout << "двадцать семь учебных заданий";
        break;
    case 28:
        cout << "двадцать восемь учебных заданий";
        break;
    case 29:
        cout << "двадцать девять учебных заданий";
        break;
    case 30:
        cout << "тридцать учебных заданий";
        break;
    case 31:
        cout << "тридцать одно учебное задание";
        break;
    case 32:
        cout << "тридцать два учебных задания";
        break;
    case 33:
        cout << "тридцать три учебных задания";
        break;
    case 34:
        cout << "тридцать четыре учебных задания";
        break;
    case 35:
        cout << "тридцать пять учебных заданий";
        break;
    case 36:
        cout << "тридцать шесть учебных заданий";
        break;
    case 37:
        cout << "тридцать семь учебных заданий";
        break;
    case 38:
        cout << "тридцать восемь учебных заданий";
        break;
    case 39:
        cout << "тридцать девять учебных заданий";
        break;
    case 40:
        cout << "сорок учебных заданий";
        break;
    }
    */
    //4
    cin >> a;

    switch (a/100)
    {
    case 1:
        cout << "сто ";
        break;
    case 2:
        cout << "двести ";
        break;
    case 3:
        cout << "триста ";
        break;
    case 4:
        cout << "четыреста ";
        break;
    case 5:
        cout << "пятьсот ";
        break;
    case 6:
        cout << "шестьсот ";
        break;
    case 7:
        cout << "семьсот ";
        break;
    case 8:
        cout << "восемьсот ";
        break;
    case 9:
        cout << "девятьсот ";
        break;
    }
    
    if ((a % 100) < 10 || (a % 100) > 19)
    {
        switch (a / 10 - a / 100 * 10)
        {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "семьдесят ";
            break;
        case 8:
            cout << "восемьдесят ";
            break;
        case 9:
            cout << "девяносто ";
            break;
        }

        switch (a % 10)
        {
        case 1:
            cout << "один" << endl;
            break;
        case 2:
            cout << "два" << endl;
            break;
        case 3:
            cout << "три" << endl;
            break;
        case 4:
            cout << "четыре" << endl;
            break;
        case 5:
            cout << "пять" << endl;
            break;
        case 6:
            cout << "шесть" << endl;
            break;
        case 7:
            cout << "семь" << endl;
            break;
        case 8:
            cout << "восемь" << endl;
            break;
        case 9:
            cout << "девять" << endl;
            break;
        }
    }
    if ((a % 100) >= 10 || (a % 100) <= 19)
    {
        switch (a%10)
        {
        case 1:
            cout << "одиннадцать";
            break;
        case 2:
            cout << "двенадцать";
            break;
        case 3:
            cout << "тринадцать";
            break;
        case 4:
            cout << "четырнадцать";
            break;
        case 5:
            cout << "пятнадцать";
            break;
        case 6:
            cout << "шестнадцать";
            break;
        case 7:
            cout << "семнадцать";
            break;
        case 8:
            cout << "восемнадцать";
            break;
        case 9:
            cout << "девятнадцать";
            break;
        }
    }

    //5

}