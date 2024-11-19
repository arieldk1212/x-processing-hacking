#include "Power.h"

dBm::dBm() { m_dBmValues.clear(); }

dBm::dBm(const std::vector<double> &Values) {
  m_dBmValues.clear();
  SetDbmValues(Values);
}