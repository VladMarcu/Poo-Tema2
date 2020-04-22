#include "Vector.h"
Vect :: Vect(int dim, int val) : dim{dim} {
    v = new int [dim];
    for (int i = 0; i < dim ; i++)
        v[i] = val;
}

Vect :: ~Vect() {
    dim = 0;
    delete [] v;
}

Vect :: Vect(const Vect &x) {
    dim = x.dim;
    v = new int [dim];
    for (int i = 0; i < dim; i++)
        v[i] = x.v[i];
}

void swap(Vect &first, Vect &second) {
    using std :: swap;
    swap(first.dim, second.dim);
    swap(first.v, second.v);
}

std::istream &operator >>(std::istream &in, Vect &vec){
    delete [] vec.v;
    in >> vec.dim;
    vec.v = new int [vec.dim];
    for(int i = 0; i < vec.dim; i++)
        in >> vec.v[i];
    return in;
}

std::ostream &operator <<(std::ostream &out, const Vect &vec){
    for(int i = 0; i < vec.dim; i++)
        out << vec.v[i] << " ";
    out << '\n';
    return out;
}

Vect &Vect::operator=( Vect src) {
    if(this != &src)
        swap(*this, src);
    return *this;
}

int Vect :: getdim() const {
    return dim;
}

int* Vect :: getelem() const {
    return v;
}
