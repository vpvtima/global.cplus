//
// Created by papasha on 08.09.2017.
//
#include <iostream>
using namespace std;

inline int listMain() {
    int value = 15;
    int &reference = value; // объявление и инициализация ссылки значением переменной value
    cout << "value     = " << value     << endl;
    cout << "reference = " << reference << endl;
    reference+=15; // изменяем значение переменной value посредством изменения значения в ссылке
    cout << "value     = " << value     << endl; // смотрим, что получилось, как будет видно дальше значение поменялось как в ссылке,
    cout << "reference = " << reference << endl; //  так и в ссылочной переменной
}