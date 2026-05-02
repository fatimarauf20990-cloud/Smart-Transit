#pragma once
#include <vector>
#include "entities/Route.h"
#include "entities/Stop.h"

class RouteController {
private:
    std::vector<Route*> m_routes;
    std::vector<Stop*> m_stops;
    // Note: Project requires a Graph<Stop> for Module 9

public:
    ~RouteController();
    void addStop(Stop* s);
    void addRoute(Route* r);
    // Shortest path logic for Module 9
    void findShortestPath(int startStopId, int endStopId);
};