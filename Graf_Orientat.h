#ifndef TEMA_2_GRAF_ORIENTAT_H
#define TEMA_2_GRAF_ORIENTAT_H
#include "MatriceAdiacenta.h"
#include "Graf.h"
#include <iostream>
using namespace std;
class Graf_Orientat : public Graf {
    MatriceAdiacenta A;
public:
    explicit Graf_Orientat(int nr=1, MatriceAdiacenta matrice = MatriceAdiacenta() );

    ~Graf_Orientat() override = default;

    friend std::ostream& operator <<(std::ostream &out, const Graf_Orientat &src);

    friend std::istream& operator >>(std::istream &in, Graf_Orientat &src);

    friend void swap(Graf_Orientat &first, Graf_Orientat &second);

    Graf_Orientat(const Graf_Orientat& src);

    Graf_Orientat& operator =(Graf_Orientat src);

    void f(int ns) override ;

    int isgraf();
};



#endif // TEMA_2_GRAF_ORIENTAT_H
