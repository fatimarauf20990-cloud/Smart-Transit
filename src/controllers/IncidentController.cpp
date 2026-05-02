#include "controllers/IncidentController.h"

IncidentController::~IncidentController() {
    for (auto i : m_history) delete i;
}

void IncidentController::reportIncident(Incident* incident, INotifiable* notifier) {
    if (incident) m_history.push_back(incident);
    if (notifier) {
        notifier->sendNotification("Incident Reported", 1); // Polymorphic notification[cite: 2]
    }
}