#include "controllers/RouteController.h"
#include <iostream>

RouteController::~RouteController() {
    for (auto r : m_routes) delete r;
    for (auto s : m_stops) delete s;
}

void RouteController::addStop(Stop* s) { if (s) m_stops.push_back(s); }
void RouteController::addRoute(Route* r) { if (r) m_routes.push_back(r); }

void RouteController::findShortestPath(int start, int end) {
    std::cout << "Calculating path from " << start << " to " << end << "..." << std::endl;
}