#pragma once
#include <vector>
#include "entities/Incident.h"
#include "entities/INotifiable.h"

class IncidentController {
private:
    std::vector<Incident*> m_history;

public:
    ~IncidentController();
    // Dispatch via INotifiable polymorphism[cite: 2]
    void reportIncident(Incident* incident, INotifiable* notifier);
};
