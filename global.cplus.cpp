#include <iostream>
#include "list.cpp"
#include "pointer.cpp"
#include "class01.cpp"

int main() {
    setlocale(LC_ALL, "rus");

    // --- классы ---
    Class01 objClass01(11,11,2011); // объявление объекта и инициализвция элементов данных
    objClass01.message(); // вызов функции message
    objClass01.getDate(); // отобразить дату

    // --- указатели ---
    //pointerMain();

    // --- ссылки ---
    //listMain();

    //std::cout << "Hello, World!" << std::endl;
    system("pause");
    return 0;
}