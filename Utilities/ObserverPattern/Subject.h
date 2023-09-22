#pragma once
#include "Observer.h"
#include <vector>
namespace ObserverPattern {
    class Subject // or you can call it "Event-Object"
    {
    public:
        Subject();
        void addObserver(const ObserverPattern::Observer* observer);
        void removeObserver(const ObserverPattern::Observer* observer);
        void notify() const; // should be called when the event is triggered
    private:
        std::vector<const ObserverPattern::Observer*> observers;
    };
};
