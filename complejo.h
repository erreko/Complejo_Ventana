#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>

class Complejo
{

private:

    float re;
    float im;

    public:

    Complejo();
    Complejo(float re, float im);
    void setRe(float re);
    void setIm(float im);

    float getRe();
    float getIm();

    void suma(Complejo a, Complejo b);
    void resta(Complejo a, Complejo b);
    void mul(Complejo a, Complejo b);
    void conjugado(Complejo a);

};



#endif // COMPLEJO_H
