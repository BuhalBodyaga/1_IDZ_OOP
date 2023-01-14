// 1 задание матрицы.cpp
#include <iostream>
#include "sourse.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int m;
    cout << "Введите размерность матрицы " << endl;
    cin >> m;
    cout<<"\n";

    int** a = new int* [m];
    int** b = new int* [m];
    int** c = new int* [m];


    createMatrix(a, m);
    createMatrix(b, m);
    createMatrix(c, m);

    arrayFilling(b, m);
    arrayFilling(c, m);

    printMatrix(b, m);
    cout << "\n" << endl;

    printMatrix(c, m);
    cout << "\n" << endl;

    getProductOfElements(b, m);					//Произведение элементов
    maxOddElement(b, m);						//Максимальный четный элемент
    summPalindromeNumber(b, m);					//Сумма чисел палиндромов вне диагоналей
    cout << "\n" << endl;
    additionalOperationOnMatrices(a, b, c, m);  //Дополнительная операция

    printMatrix(a, m);

    deleteMatrix(a, m);
    deleteMatrix(b, m);
    deleteMatrix(c, m);

}
