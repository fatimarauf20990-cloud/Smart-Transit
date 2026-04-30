#pragma once
#include "entities/Entity.h"
#include "utilities/CustomString.h"
#include "utilities/CustomDate.h"
#include "utilities/GeoCoordinate.h"

enum class AssetStatus {
    ACTIVE,
    UNDER_MAINTENANCE,
    DECOMMISSIONED
};

class TransitAsset : public Entity {
protected:
    CustomString m_assetCode;
    CustomDate m_purchaseDate;
    double m_purchaseValue;
    double m_currentValue;
    AssetStatus m_status;
    GeoCoordinate m_location;

public:
    TransitAsset();
    TransitAsset(const CustomString& code,
                 const CustomDate& purchaseDate,
                 double purchaseValue,
                 double currentValue,
                 AssetStatus status,
                 const GeoCoordinate& location);

    // Getters
    CustomString getAssetCode() const;
    double getPurchaseValue() const;
    double getCurrentValue() const;
    AssetStatus getStatus() const;
    GeoCoordinate getLocation() const;

    // Overridden functions
    CustomString getType() const override;
    void print() const override;
};
