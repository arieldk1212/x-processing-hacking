#ifndef RECIEVER_H
#define RECIEVER_H

#include "../Power/Power.h"

#include <iostream>
#include <string>
#include <unordered_map>

typedef std::unordered_map<std::string, int> SatellitesMap;
typedef std::vector<SatellitesMap *> Satellites;

class Satellite : public Power {
public:
  virtual ~Satellite() = 0;
};

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
      : m_Latitude(Latitude), m_Longitude(Longitude) {
    Geo::FormatLocation(m_Latitude, m_Longitude);
  }
  ~GPS() { std::cout << "GPS Coordinate's Deleted."; }

private:
  double m_Latitude;
  double m_Longitude;
  int m_Satelite;
  std::string m_Coordinates;
};

#endif