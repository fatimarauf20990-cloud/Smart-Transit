#include "entities/Entity.h"

// start IDs from 1
int Entity::s_nextId = 1;

Entity::Entity()
    : m_id(s_nextId++), m_createdOn(1, 1, 2000), m_updatedOn(1, 1, 2000) {}

Entity::Entity(int id)
    : m_id(id), m_createdOn(1, 1, 2000), m_updatedOn(1, 1, 2000) {}

int Entity::getId() const {
    return m_id;
}

CustomDate Entity::getCreatedOn() const {
    return m_createdOn;
}

CustomDate Entity::getUpdatedOn() const {
    return m_updatedOn;
}

void Entity::setUpdatedOn(const CustomDate& date) {
    m_updatedOn = date;
}