#include "entities/TransitAsset.h"
#include <iostream>

TransitAsset::TransitAsset()
    : m_assetCode("N/A"),
    m_purchaseDate(1, 1, 2000),
    m_purchaseValue(0),
    m_currentValue(0),
    m_status(AssetStatus::ACTIVE),
    m_location(0, 0) {}

TransitAsset::TransitAsset(const CustomString& code,
                           const CustomDate& purchaseDate,
                           double purchaseValue,
                           double currentValue,
                           AssetStatus status,
                           const GeoCoordinate& location)
    : m_assetCode(code),
    m_purchaseDate(purchaseDate),
    m_purchaseValue(purchaseValue),
    m_currentValue(currentValue),
    m_status(status),
    m_location(location) {}

CustomString TransitAsset::getAssetCode() const { return m_assetCode; }
double TransitAsset::getPurchaseValue() const { return m_purchaseValue; }
double TransitAsset::getCurrentValue() const { return m_currentValue; }
AssetStatus TransitAsset::getStatus() const { return m_status; }
GeoCoordinate TransitAsset::getLocation() const { return m_location; }

CustomString TransitAsset::getType() const {
    return CustomString("TransitAsset");
}

void TransitAsset::print() const {
    std::cout << "Asset Code: " << m_assetCode << "\n";
    std::cout << "Purchase Date: "; m_purchaseDate.print(); std::cout << "\n";
    std::cout << "Purchase Value: " << m_purchaseValue << "\n";
    std::cout << "Current Value: " << m_currentValue << "\n";
    std::cout << "Status: ";
    if (m_status == AssetStatus::ACTIVE) std::cout << "ACTIVE";
    else if (m_status == AssetStatus::UNDER_MAINTENANCE) std::cout << "UNDER_MAINTENANCE";
    else std::cout << "DECOMMISSIONED";
    std::cout << "\nLocation: ";
    m_location.print();
    std::cout << "\n";
}