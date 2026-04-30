cmake_minimum_required(VERSION 3.5)

project(SmartTransit VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt setup (safe for future GUI)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

include_directories(include)

# ===================== ALL FILES =====================
set(PROJECT_SOURCES

    main.cpp

    # ===== Utilities =====
    src/utilities/CustomString.cpp
    src/utilities/CustomDate.cpp
    src/utilities/CustomTime.cpp
    src/utilities/GeoCoordinate.cpp

    # ===== Core Entities =====
    src/entities/Entity.cpp
    src/entities/TransitAsset.cpp
    src/entities/Person.cpp
    src/entities/Vehicle.cpp
    src/entities/StaffMember.cpp

    # ===== Vehicle Types =====
    src/entities/CityBus.cpp
    src/entities/MetroTrain.cpp
    src/entities/RideHailCar.cpp
    src/entities/FreightTruck.cpp
    src/entities/ElectricScooter.cpp

    # ===== Staff =====
    src/entities/Driver.cpp
    src/entities/Conductor.cpp
    src/entities/Dispatcher.cpp
    src/entities/MaintenanceTech.cpp
    src/entities/AdminUser.cpp

    # ===== Level 5 =====
    src/entities/ArticulatedBus.cpp
    src/entities/HighSpeedTrain.cpp
    src/entities/RefrigeratedTruck.cpp
    src/entities/SeniorDriver.cpp

    # ===== Supporting =====
    src/entities/Stop.cpp
    src/entities/Route.cpp
    src/entities/Trip.cpp
    src/entities/Ticket.cpp
    src/entities/Passenger.cpp
    src/entities/MaintenanceJob.cpp
    src/entities/ChargingStation.cpp
    src/entities/FuelLog.cpp
    src/entities/Incident.cpp

    # ===== Fare =====
    src/entities/FlatFareBus.cpp
    src/entities/ZoneBasedMetro.cpp
    src/entities/SurgeRideHail.cpp
    src/entities/WeightFreight.cpp
    src/entities/MicroMobility.cpp

    # ===== Payment =====
    src/entities/CashProcessor.cpp
    src/entities/TransitCardProcessor.cpp
    src/entities/QRCodeProcessor.cpp
    src/entities/CorporateAccountProcessor.cpp
    src/entities/LoyaltyPointsProcessor.cpp

    # ===== Notification =====
    src/entities/SMSNotifier.cpp
    src/entities/EmailNotifier.cpp
    src/entities/PushNotifier.cpp
    src/entities/DisplayBoardNotifier.cpp

    # ===== Report Generator =====
    src/entities/FleetUtilisationReport.cpp
    src/entities/RevenueReport.cpp
    src/entities/EmissionsReport.cpp
    src/entities/IncidentReport.cpp
    src/entities/DriverPerformanceReport.cpp
    src/entities/RouteEfficiencyReport.cpp
)

# ===================== EXECUTABLE =====================
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(SmartTransit
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}

    )
else()
    add_executable(SmartTransit ${PROJECT_SOURCES})
endif()

# ===================== LINKING =====================
target_link_libraries(SmartTransit PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

if(${QT_VERSION_MAJOR} EQUAL 6)
    qt_finalize_executable(SmartTransit)
endif()