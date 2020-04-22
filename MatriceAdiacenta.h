#ifndef TEMA_2_MATRICEADIACENTA_H
#define TEMA_2_MATRICEADIACENTA_H
#include<istream>
#include<ostream>
#include <iostream>
class MatriceAdiacenta {
private:
    int **matrice;
    int m, n;

public:
    explicit MatriceAdiacenta(int m=1, int n=1, int val=0);

    ~MatriceAdiacenta();

    friend std::ostream& operator <<(std::ostream &out, const MatriceAdiacenta &matrix);

    friend std::istream& operator >>(std::istream &in, MatriceAdiacenta &matrix);

    friend void swap(MatriceAdiacenta &first, MatriceAdiacenta &second);

    MatriceAdiacenta(const MatriceAdiacenta& matrix);

    MatriceAdiacenta& operator =(MatriceAdiacenta matrix);

    int getrows() const;

    int getcolumns() const;

    int** getmatrix() const;
};


#endif // TEMA_2_MATRICEADIACENTA_H
