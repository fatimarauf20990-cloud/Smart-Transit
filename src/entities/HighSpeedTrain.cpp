#include "entities/HighSpeedTrain.h"
#include <iostream>

HighSpeedTrain::HighSpeedTrain()
    : m_operatingSpeedKmh(0), m_tiltAngle(0), m_signalClass("N/A") {}

HighSpeedTrain::HighSpeedTrain(int speed, int tilt, const CustomString& signal)
    : m_operatingSpeedKmh(speed), m_tiltAngle(tilt), m_signalClass(signal) {}

double HighSpeedTrain::getFuelCostPerKm() const { return 25.0; }
bool HighSpeedTrain::performDailyCheck() const { return true; }
double HighSpeedTrain::calculateEmissions(double km) const { return km * 0.3; }

CustomString HighSpeedTrain::getType() const { return CustomString("HighSpeedTrain"); }

void HighSpeedTrain::print() const {
    std::cout << "HighSpeedTrain Speed: " << m_operatingSpeedKmh
              << " Tilt: " << m_tiltAngle
              << " Signal: " << m_signalClass << "\n";
}