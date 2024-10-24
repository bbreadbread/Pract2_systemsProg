#include <iostream>
using namespace std;

void Find_Task1(int array_find[], int num_find)
{
    cout << "Индексы всех вхождений числа " << num_find << ": ";
    for (int i = 0; i < 20; i++)
    {
        if (array_find[i] == num_find)
        {
            cout << i;
            cout << " ";
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    //1
    cout << "Задание 1" << endl;

    int array[20];
    int num;
    for (int i = 0; i < 20; i++) {

        array[i] = rand() % 10-5;
        cout << array[i] <<" ";
    }

    cout << endl << "Введите число для поиска по массиву"<< endl;
    cin >> num;
    Find_Task1(array, num);

    

    //2
    cout << endl << endl << "Задание 2" << endl;

    int array2[3][3][3];
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum = 0;
        cout << endl;
        for (int j = 0; j < 3; j++) {
            sum = 0;
            for (int l = 0; l < 3; l++) {

                array2[i][j][l] = rand() %10-5;
                cout << "[" << i << "][" << j << "][" << l << "] =" <<
                    array2[i][j][l] << endl;
                sum += fabs(array2[i][j][l]);
            }   
            cout << "Сумма абсолютных значений глубокого массива: " << sum << endl << endl;
        }
    }

}
