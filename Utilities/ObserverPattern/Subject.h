#pragma once
#include "Observer.h"
#include <vector>
class Subject // or you can call it "Event-Object"
{
public:
    Subject();
    void addObserver(const Observer* observer);
    void removeObserver(const Observer* observer);
    void notify() const; // should be called when the event is triggered
private:
    std::vector<const Observer*> observers;
};
