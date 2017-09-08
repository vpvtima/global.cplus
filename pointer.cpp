//
// Created by papasha on 08.09.2017.
//

#include <iostream>
using namespace std;

int pointerMain() {
    int var = 123; // инициализация переменной var числом 123
    int *ptrvar = &var; // указатель на переменную var (присвоили адрес переменной указателю)
    cout << "&var    = " << &var << endl;// адрес переменной var содержащийся в памяти, извлечённый операцией взятия адреса
    cout << "ptrvar  = " << ptrvar << endl;// адрес переменной var, является значением указателя ptrvar
    cout << "var     = " << var << endl; // значение в переменной var
    cout << "*ptrvar = " << *ptrvar << endl; // вывод значения содержащегося в переменной var через указатель, операцией разименования указателя
}