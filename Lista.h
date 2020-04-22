#ifndef TEMA_2_LISTA_H
#define TEMA_2_LISTA_H
#include "Vector.h"
#include <iostream>
class Lista {
private:
    Vect *l;
    int dimensiune;
public:
    explicit Lista(int dimensiune=1);

    ~Lista();

    friend std::ostream& operator <<(std::ostream &out, const Lista &lis);

    friend std::istream& operator >>(std::istream &in, Lista &lis);

    friend void swap(Lista &first, Lista &second);

    Lista(const Lista& lis);

    Lista& operator =(Lista src);

    int getdimensiune() const;

    Vect* getvector() const;
};



#endif // TEMA_2_LISTA_H
