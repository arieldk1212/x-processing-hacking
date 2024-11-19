#ifndef POWER_H
#define POWER_H

#include <vector>

class Power {
public:
  virtual ~Power() = 0;
  virtual std::vector<double> GetPower() = 0;
  virtual std::vector<double> CalculatePower() = 0;
};

class dBm : public Power {
public:
  dBm();
  dBm(const std::vector<double> &Values);
  ~dBm() override { m_dBmValues.clear(); }

  std::vector<double> GetPower() override;
  void SetDbmValues(const std::vector<double> &Values) { m_dBmValues = Values; }

  std::vector<double> CalculatePower() override;

private:
  std::vector<double> m_dBmValues;
};

#endif