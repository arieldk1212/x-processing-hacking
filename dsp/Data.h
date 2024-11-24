#ifndef DATA_H
#define DATA_H

#include <complex>

struct Complex {

};

class ComplexNumber {
public:
  ComplexNumber(double Real, double Imaginary)
      : m_Real(Real), m_Imaginary(Imaginary) {
    m_Complex = m_Real * m_Imaginary;
  }

private:
  std::complex<double> m_Complex;
  double m_Real;
  double m_Imaginary;
};

// TODO: make data a ptr to data structure of complex numbers to store signals for fft.

class Data {
public:
private:
};

#endif