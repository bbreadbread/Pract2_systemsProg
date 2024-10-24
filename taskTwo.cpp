// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

struct Movie {

    char title[255];
    char director[255];
    int year;
};


int main()
{
    setlocale(LC_ALL, "Russian");

    Movie myMovie[5];

    for (int k = 0;k < 5;k++)
    {
        strcpy_s(myMovie[k].title, "Пусто");
        strcpy_s(myMovie[k].director, "Пусто");
        myMovie[k].year = 0;
    }

    int answer, i = 0, userNum;

    while (true) {
        cout << endl << "Добро пожаловать в кинотеку! Выберите действие: \n1) Добавить фильм (максимум 5) \n2) Выяснить, является ли выбранный фильм классикой. \n3) Выйти из кинотеки." << endl;
        cin >> answer;
        cout << endl;
        switch (answer)
        {
        case 1:
            if (i < 5)
            {
                cout << "Название фильма:" << endl;
                cin >> myMovie[i].title;

                cout << "Гравный режиссер фильма:" << endl;
                cin >> myMovie[i].director;

                cout << "Год выхода фильма:" << endl;
                cin >> myMovie[i].year;
                i++;
            }
            else cout << "Кинотека переполнена!";
            break;

        case 2:
            cout << "Добавленные фильмы:" << endl << endl;

            for (int k = 0;k < 5;k++)
            {
                cout << endl << "Фильм " << k+1 << endl;
                cout << myMovie[k].title << endl << myMovie[k].director << endl << myMovie[k].year << endl ;
            }

            cout << "Введите номер фильма, который вы желаете проверить: ";
            cin >> userNum;
            if (myMovie[userNum-1].year > 1910 && myMovie[userNum-1].year < 1990)
                cout << "Выбранный фильм является классикой." << endl << endl;
            else  cout << "Выбранный фильм НЕ является классикой." << endl << endl;

            break;

        case 3:

            return i;

            break;

        default:
            cout << "Такое действие не найдено!" << endl;
            break;
        }
    }

    return 0;
}
