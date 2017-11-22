#include "abonent.h"

Abonent::Abonent(int p, int g)
{    
    this->p = p;
    this->g = g;
    srand(time(0));
    closed_key = rand() %10; // генерация закрытого ключа (до 10)
    open_key = long long(pow(g,closed_key)) %p; // вычисление открытого ключа
}

Abonent::Abonent(Abonent &a) : Abonent(a.p, a.g) {}

void Abonent::swap_open_key(Abonent &a)
{
    long long temp;
    temp = a.open_key;
    a.open_key = open_key;
    open_key = temp;
}

void Abonent::calc_gen_sec_key()
{
    secret_key = long long(pow(open_key, closed_key)) %p;
}
