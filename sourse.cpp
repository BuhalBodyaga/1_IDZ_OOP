//
// Created by genri on 14.01.2023.
//
#include <iostream>
#include "sourse.h"

using namespace std;

void getProductOfElements(int** arr, int m) {
    int multiplication = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            multiplication *=arr[i][j];
        }
    }
    cout << "Произведение элементов равно " << multiplication << endl;
}
void maxOddElement (int** arr, int m) {
    int max = -1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (max < arr[i][j] && arr[i][j] % 2 == 0) {
                max = arr[i][j];
            }
        }
    }
    cout << "Максимальный четный элемент " <<max<< endl;
}
void summPalindromeNumber(int** arr, int m) {
    int summ = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (m != i + j - 1 && i != j) {
                int temp = arr[i][j];
                int b = 0;
                while (temp != 0)
                {
                    b = b * 10 + temp % 10; //Переворачиваем число по цифрам
                    temp /= 10;				//Отбрасываем последнюю цифру
                }
                if (arr[i][j] == b) {
                    summ += arr[i][j];
                }

            }
        }
    }
    cout << "Сумма чисел палиндромов вне диагоналей " << summ << endl;
}
void createMatrix(int** arr, int m) {
    for (int i = 0; i < m; i++) { //Создание  массива

        arr[i] = new int[m];
    }
}
void printMatrix(int** arr, int m) {
    for (int i = 0; i < m; i++) { //Вывод массива
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
void deleteMatrix(int** arr, int m) {
    for (int i = 0; i < m; i++) { //Удаление массива

        delete[] arr[i];
    }
    delete[] arr;
}
void arrayFilling(int** arr, int m) {
    for (int i = 0; i < m; i++) { //Заполнение массива
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 10;
        }
    }
}
void matrixTransposition(int** arr, int m){
    int t;
    for (int i = 0; i < m; i++){
        for (int j = i; j < m; j++){
            t = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = t;
        }
    }
}
void additionalOperationOnMatrices(int** a, int** b, int** c, int m) {
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            a[i][j] = 0;
            for (int k = 0; k < m; k++)
                a[i][j] += b[i][k] * c[k][j];
        }
    }
    matrixTransposition(b, m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {

            a[i][j] = a[i][j] - b[i][j];
        }
    }
}