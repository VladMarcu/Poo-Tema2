#ifndef TEMA_2_VECTOR_H
#define TEMA_2_VECTOR_H
#include <iostream>
class Vect {
    int *v;
    int dim;

public:
    explicit Vect(int dim=1, int val=0);

     ~Vect();

    Vect(const Vect& x);

    friend void swap(Vect &first, Vect &second);

    Vect& operator =(Vect src);

    friend std::ostream& operator <<(std::ostream &out, const Vect &vec);

    friend std::istream& operator >>(std::istream &in, Vect &vec);

    int getdim() const;

    int* getelem() const;
};



#endif // TEMA_2_VECTOR_H
