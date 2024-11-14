#ifndef RECIEVER_H
#define RECIEVER_H

#include <iostream>
#include <string>

class Geo {
public:
  virtual ~Geo() = default;
  virtual void FormatLocation(const double &Lat, const double &Lon) {
    v_FormattedLocation = std::to_string(Lat) + "/" + std::to_string(Lon);
  }

protected:
  Geo() : v_FormattedLocation("") {}
  std::string v_FormattedLocation;
};

class GPS : public Geo {
public:
  GPS(double Latitude, double Longitude)
      : m_Latitude(Latitude), m_Longitude(Longitude) {}
  ~GPS() { std::cout << "GPS Coordinate''s Deleted."; }
  void FormatLocation(const double &Lat, const double &Lon) override {
    Geo::FormatLocation(m_Latitude, m_Longitude);
  }

private:
  double m_Latitude;
  double m_Longitude;
  std::string m_Coordinates;
};

#endif