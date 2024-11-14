#ifndef DATA_H
#define DATA_H

#include <complex>

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

#endif