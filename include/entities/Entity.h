#pragma once
#include "utilities/CustomDate.h"
#include "utilities/CustomString.h"

class Entity {
protected:
    static int s_nextId;
    int m_id;
    CustomDate m_createdOn;
    CustomDate m_updatedOn;

public:
    Entity();
    explicit Entity(int id);
    virtual ~Entity() = default;

    int getId() const;
    CustomDate getCreatedOn() const;
    CustomDate getUpdatedOn() const;

    void setUpdatedOn(const CustomDate& date);

    // Pure virtual (each child must implement)
    virtual CustomString getType() const = 0;
    virtual void print() const = 0;
};
