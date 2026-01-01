#ifndef _COMPLEX_
#define _COMPLEX_

template<typename T>
class complex
{
public:
    complex (T r, T i):re(r), im(r)
    {}
    complex ():re(0), im(0)
    {}
    T real() const{return re;}
    T imag() const{return im;}
private:
    T re, im;
};

#endif