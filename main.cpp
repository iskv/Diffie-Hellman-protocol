/*
 * Использование протокола Диффи — Хеллмана на примере двух абонентов
 */

#include "abonent.h"

int main()
{
    Abonent Alice(23,5); // Создается абонент Алиса с открытыми параметрами p, g
    Abonent Bob(Alice); // Создается абонент Боб, которому устанавливаются открытые параметры p, g Алисы

    Alice.swap_open_key(Bob); // Обмен открытыми ключами с другой стороной
    Alice.calc_gen_sec_key(); // Вычисляем общий секретный ключ
    Bob.calc_gen_sec_key();

    cout << "Secret key Alice: ";
    Alice.show_secret_key();
    cout << "\nSecrent key Bob: ";
    Bob.show_secret_key();
    cout << endl;

    cin.get();
    return 0;
}
