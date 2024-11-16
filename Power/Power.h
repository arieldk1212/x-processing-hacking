#ifndef POWER_H
#define POWER_H

#include <vector>

class Power {
public:
  virtual ~Power() = 0;
  virtual void GetPower() = 0;
  virtual std::vector<double> CalculatePower() = 0;
};

class dBm : public Power {
public:
  dBm();
  dBm(const std::vector<double> &Values);
  ~dBm() override { m_dBmValues.clear(); }
  void GetPower() override;
  std::vector<double> CalculatePower() override;

private:
  std::vector<double> m_dBmValues;
};

#endif