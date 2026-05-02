cmake_minimum_required(VERSION 3.5)

project(SmartTransit VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ===== Qt Setup =====
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# Include directories (IMPORTANT FIX)
include_directories(include src)

# ===================== CORE SOURCES =====================
set(CORE_SOURCES
    main.cpp

    # Utilities
    src/utilities/CustomString.cpp
    src/utilities/CustomDate.cpp
    src/utilities/CustomTime.cpp
    src/utilities/GeoCoordinate.cpp

    # Entities
    src/entities/Entity.cpp
    src/entities/TransitAsset.cpp
    src/entities/Person.cpp
    src/entities/Vehicle.cpp
    src/entities/StaffMember.cpp

    src/entities/CityBus.cpp
    src/entities/MetroTrain.cpp
    src/entities/RideHailCar.cpp
    src/entities/FreightTruck.cpp
    src/entities/ElectricScooter.cpp

    src/entities/Driver.cpp
    src/entities/Conductor.cpp
    src/entities/Dispatcher.cpp
    src/entities/MaintenanceTech.cpp
    src/entities/AdminUser.cpp

    src/entities/ArticulatedBus.cpp
    src/entities/HighSpeedTrain.cpp
    src/entities/RefrigeratedTruck.cpp
    src/entities/SeniorDriver.cpp

    src/entities/Stop.cpp
    src/entities/Route.cpp
    src/entities/Trip.cpp
    src/entities/Ticket.cpp
    src/entities/Passenger.cpp
    src/entities/MaintenanceJob.cpp
    src/entities/ChargingStation.cpp
    src/entities/FuelLog.cpp
    src/entities/Incident.cpp

    # Fare / Payment / Notifiers
    src/entities/FlatFareBus.cpp
    src/entities/ZoneBasedMetro.cpp
    src/entities/SurgeRideHail.cpp
    src/entities/WeightFreight.cpp
    src/entities/MicroMobility.cpp

    src/entities/CashProcessor.cpp
    src/entities/TransitCardProcessor.cpp
    src/entities/QRCodeProcessor.cpp
    src/entities/CorporateAccountProcessor.cpp
    src/entities/LoyaltyPointsProcessor.cpp

    src/entities/SMSNotifier.cpp
    src/entities/EmailNotifier.cpp
    src/entities/PushNotifier.cpp
    src/entities/DisplayBoardNotifier.cpp

    # Reports
    src/entities/FleetUtilisationReport.cpp
    src/entities/RevenueReport.cpp
    src/entities/EmissionsReport.cpp
    src/entities/IncidentReport.cpp
    src/entities/DriverPerformanceReport.cpp
    src/entities/RouteEfficiencyReport.cpp

    # Controllers
    src/controllers/AppController.cpp
    src/controllers/AuthController.cpp
    src/controllers/FleetController.cpp
    src/controllers/TicketingController.cpp
    src/controllers/RouteController.cpp
    src/controllers/TripController.cpp
    src/controllers/DispatchController.cpp
    src/controllers/PaymentController.cpp
    src/controllers/StaffController.cpp
    src/controllers/MaintenanceController.cpp
    src/controllers/IncidentController.cpp
    src/controllers/ReportController.cpp
    src/controllers/FileController.cpp

    # Exceptions
    src/exceptions/TransitException.cpp
)

# ===================== GUI SOURCES =====================
set(GUI_SOURCES
    src/gui/LoginWindow.cpp
    src/gui/LiveMapWindow.cpp
    src/gui/FleetManagementWindow.cpp
    src/gui/MainDashboardWindow.cpp
    src/gui/RouteBuilderWindow.cpp
    src/gui/TripSchedulerWindow.cpp
    src/gui/DispatchConsoleWindow.cpp
    src/gui/TicketingWindow.cpp
    src/gui/StaffManagementWindow.cpp
    src/gui/MaintenanceWindow.cpp
    src/gui/ReportDashboardWindow.cpp
    src/controllers/DataManager.cpp
)

# ===================== FINAL SOURCES =====================
set(PROJECT_SOURCES
    ${CORE_SOURCES}
    ${GUI_SOURCES}
)

# ===================== EXECUTABLE =====================
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(SmartTransit
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        src/gui/MainDashboardWindow.cpp
        src/gui/MainDashboardWindow.h
        src/gui/RouteBuilderWindow.h
        src/gui/RouteBuilderWindow.cpp

        src/gui/TripSchedulerWindow.h
        src/gui/TripSchedulerWindow.cpp

        src/gui/DispatchConsoleWindow.h
        src/gui/DispatchConsoleWindow.cpp

        src/gui/TicketingWindow.h
        src/gui/TicketingWindow.cpp
        src/gui/StaffManagementWindow.h
        src/gui/StaffManagementWindow.cpp
        src/gui/MaintenanceWindow.h
        src/gui/MaintenanceWindow.cpp
        src/gui/ReportDashboardWindow.h
        src/gui/ReportDashboardWindow.cpp
        include/controllers/DataManager.h
        src/controllers/DataManager.cpp


    )
else()
    add_executable(SmartTransit ${PROJECT_SOURCES})
endif()

# ===================== LINK LIBRARIES =====================
target_link_libraries(SmartTransit PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# ===================== FINALIZE =====================
if(${QT_VERSION_MAJOR} EQUAL 6)
    qt_finalize_executable(SmartTransit)
endif()