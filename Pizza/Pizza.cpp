// Pizza.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int kawalkiNaOsobe(int _nOsoby, int _nPizza) {
    int nKawalkiSuma = _nPizza * 8;

    return int(nKawalkiSuma/_nOsoby);
}


int main()
{
    int nIloscOsob, nIloscPizz;

    cout << "Podaj ile mamy osob\n";
        cin >> nIloscOsob;
    cout << "Podaj ile kupujemy pizzy (1 pizza = 8 kawalkow)\n";
        cin >> nIloscPizz;

    cout << kawalkiNaOsobe(nIloscOsob, nIloscPizz);

}  
