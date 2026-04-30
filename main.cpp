#include <iostream>

#include "utilities/CustomString.h"
#include "utilities/CustomDate.h"
#include "utilities/CustomTime.h"
#include "utilities/GeoCoordinate.h"

// ⚠️ These may cause issues if abstract → keep commented
// #include "entities/TransitAsset.h"
// #include "entities/Person.h"

#include "entities/CityBus.h"
#include "entities/MetroTrain.h"
#include "entities/RideHailCar.h"
#include "entities/FreightTruck.h"
#include "entities/ElectricScooter.h"

#include "entities/Driver.h"
#include "entities/Conductor.h"
#include "entities/Dispatcher.h"
#include "entities/MaintenanceTech.h"
#include "entities/AdminUser.h"

#include "entities/ArticulatedBus.h"
#include "entities/HighSpeedTrain.h"
#include "entities/RefrigeratedTruck.h"
#include "entities/SeniorDriver.h"

#include "entities/Stop.h"
#include "entities/Route.h"
#include "entities/Trip.h"
#include "entities/Ticket.h"
#include "entities/Passenger.h"
#include "entities/MaintenanceJob.h"
#include "entities/ChargingStation.h"
#include "entities/FuelLog.h"
#include "entities/Incident.h"

// ===== Module 4 =====

// Fare
#include "entities/IFareCalculator.h"
#include "entities/FlatFareBus.h"
#include "entities/ZoneBasedMetro.h"
#include "entities/SurgeRideHail.h"
#include "entities/WeightFreight.h"
#include "entities/MicroMobility.h"

// Payment
#include "entities/IPaymentProcessor.h"
#include "entities/CashProcessor.h"
#include "entities/TransitCardProcessor.h"
#include "entities/QRCodeProcessor.h"
#include "entities/CorporateAccountProcessor.h"
#include "entities/LoyaltyPointsProcessor.h"

// Notification
#include "entities/INotifiable.h"
#include "entities/SMSNotifier.h"
#include "entities/EmailNotifier.h"
#include "entities/PushNotifier.h"
#include "entities/DisplayBoardNotifier.h"

// Report (NEW ADDITION)
#include "entities/IReportGenerator.h"
#include "entities/FleetUtilisationReport.h"
#include "entities/RevenueReport.h"

void demoAllEntities() {
    std::cout << "Creating objects...\n";

    CustomString text("Hello");
    CustomDate date(1,1,2024);
    CustomTime time(10,30,0);
    GeoCoordinate loc(24.86, 67.01);

    // ⚠️ Commented to avoid abstract/constructor errors
    /*
    TransitAsset asset(...);
    Person person(...);
    */

    CityBus bus(CustomString("BUS-101"), CustomString("R-1"), true, 5);
    MetroTrain train(2, 6, 80, true);
    RideHailCar car(4.5, 100, 1.2);
    FreightTruck truck(500, 3000, true);
    ElectricScooter scooter(60, 20, CustomString("Zone-A"));

    Driver driver(CustomString("LIC-1"), 3);
    Conductor conductor(10);
    Dispatcher dispatcher(2);
    MaintenanceTech tech(CustomString("Engine"));
    AdminUser admin(true);

    ArticulatedBus aBus(50, 12.5);
    HighSpeedTrain hTrain(250, 8, CustomString("A"));
    RefrigeratedTruck rTruck(-5, -2);
    SeniorDriver sDriver(2, 5);

    Stop stop(1, CustomString("Stop1"), loc);
    Route route(101, 10.5, 5, true);
    Trip trip(1, 1, 1, 101, time, time, time, 40, TripStatus::SCHEDULED);
    Ticket ticket(1, 1, 1, 100.0, date, time);
    Passenger passenger(1, CustomString("Sara"), CustomString("0300"), 20);
    MaintenanceJob job(1, 1, 1, CustomString("Check"), date, date, 2000, MaintenanceStatus::COMPLETED);
    ChargingStation station(1, loc, 5, 2);
    FuelLog fuel(1, 1, 20, 280, 5600, 10000, date);
    Incident incident(1, 1, 1, CustomString("Minor"), loc, date, time, IncidentSeverity::LOW, true);

    // ===== Fare =====
    IFareCalculator* fares[2] = {
        new FlatFareBus(),
        new ZoneBasedMetro()
    };

    for (auto f : fares) {
        std::cout << f->getFareType() << "\n";
        delete f;
    }

    // ===== Payment =====
    IPaymentProcessor* pay[2] = {
        new CashProcessor(),
        new QRCodeProcessor()
    };

    for (auto p : pay) {
        std::cout << p->getProcessorType() << "\n";
        delete p;
    }

    // ===== Notification =====
    INotifiable* notif[2] = {
        new SMSNotifier(),
        new EmailNotifier()
    };

    for (auto n : notif) {
        n->sendNotification(CustomString("Test"));
        std::cout << n->getDeliveryLog() << "\n";
        delete n;
    }

    // ===== Report (NEW) =====
    IReportGenerator* reports[2] = {
        new FleetUtilisationReport(),
        new RevenueReport()
    };

    for (auto r : reports) {
        std::cout << r->getTitle() << "\n";
        r->generateReport();
        delete r;
    }

    std::cout << "All objects created successfully.\n";
}

int main() {
    std::cout << "SmartTransit EMS\n";
    demoAllEntities();
    return 0;
}