#include "complejo.h"

Complejo::Complejo()
{
    this->re = 0;
    this->im = 0;

}

Complejo::Complejo(float re, float im)
{
    this->re = re;
    this->im = im;

}

void Complejo::setRe(float re)
{
    this->re = re;

}

void Complejo::setIm(float im)
{
    this->im = im;
}

float Complejo::getRe()
{
    return this->re;
}

float Complejo::getIm()
{
    return this->im;
}

void Complejo::suma(Complejo a, Complejo b)
{
  this->re = a.re+b.re;
  this->im = a.im+b.im;
}

void Complejo::resta(Complejo a, Complejo b)
{
    this->re = a.re-b.re;
    this->im = a.im-b.im;

}

void Complejo::mul(Complejo a, Complejo b)
{
    this->re = a.re*b.re-a.im*b.im;
    this->im = a.re*b.im+a.im*b.re;

}

void Complejo::conjugado(Complejo a)
{
    this->re = a.re;
    this->im = (-1)*(a.im);
}
