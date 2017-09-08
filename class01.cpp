//
// Created by papasha on 08.09.2017.
//
#include <iostream>
using namespace std;
// начало объявления класса
class Class01 // имя класса
{
private: // спецификатор доступа private
    int day, // день
            month, // месяц
            year; // год
public: // спецификатор доступа
    // конструктор класса
    Class01(int date_day, int date_month, int date_year ) // конструктор класса
    {
        setDate(date_day, date_month, date_year); // вызов функции установки даты
    }    
    void message() // функция (метод класса) выводящая сообщение на экран
    {
        cout << "website: cppstudio.com\ntheme: Classes and Objects in C + +\n";
    }
    // метод-сеттер
    void setDate(int date_day, int date_month, int date_year) // установка даты в формате дд.мм.гг
    {
        day   = date_day; // инициализация день
        month = date_month; // инициализация месяц
        year  = date_year; // инициализация год
    }
    // метод-геттер
    void getDate() // отобразить текущую дату
    {
        cout << "Date: " << day << "." << month << "." << year << endl;
    }
}; // конец объявления класса Class01