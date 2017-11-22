#ifndef ABONENT_H
#define ABONENT_H

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

class Abonent
{
private:
    long long secret_key; // секретный ключ
    long long closed_key; // закрытый ключ

public:
    Abonent(int p, int g);
    Abonent(Abonent& a);

    void set_p(int p) { this->p = p; }
    void set_g(int g) { this->g = g; }
    void show_closed_key() { cout << closed_key; }
    void show_secret_key() { cout << secret_key; }

    void swap_open_key(Abonent& a);
    void calc_gen_sec_key();

    int p, g; // открытые параметры
    long long open_key;


};

#endif // ABONENT_H
