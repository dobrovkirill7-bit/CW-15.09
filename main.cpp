#include <iostream>
using namespace std;

// 1
class Student
{
protected:
	string _name;
	string _surname;
	string _group;
};

class Aspirant : public Student
{
private:
	string _nameFinalProject;
	string _discribe;
};

// 2

class Passport
{
protected:
    int _bornday;
    string _name;
    string _surname;
    string _sex;
    int _dateExpire;
};

class ForeignPassport : public Passport
{
private:
    bool _visa = true;
    int _numpas;
};


// 3
class Transport
{
protected:
    double _kilometrs;
    double _time;
    bool _radio;
    double _money;

public:
    Transport(double kilometrs, double speed, double time, bool radio)
    {
        _kilometrs = kilometrs;
        _time = _kilometrs / speed;
        _money = _kilometrs * time;
        _radio = radio;
    }

    void Print() const
    {
        cout << "Время: " << _time << " световых лет" << endl;
        cout << "Стоимось: " << _money << " ливанских фунтов" << endl;
        cout << "Крутой саббуфер: " << _radio << endl;
    }
};

class Bicycle : public Transport
{
public:
    Bicycle(double kilometrs, double speed, double time) : Transport(kilometrs, speed, time, false){}

    void GetMoney()
    {
        cout << _money << endl;
    }
};

class Auto : public Transport
{
public:
    Auto(double kilometrs, double speed, double time, bool radio) : Transport(kilometrs, speed, time, radio){}

    void GetMoney()
    {
        cout << _money << endl;
    }
};

class Cart : public Transport
{
public:
    Cart(double kilometrs, double speed, double time) : Transport(kilometrs, speed, time, false){}

    void GetMoney()
    {
        cout << _money << endl;
    }
};