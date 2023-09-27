#include "Subject.h"
#include <assert.h>

constexpr int OBSERVER_PATTERN_OBSERVERS_INITIAL_SIZE = 5;

ObserverPattern::Subject::Subject()
{
    observers.reserve(OBSERVER_PATTERN_OBSERVERS_INITIAL_SIZE);
}

void ObserverPattern::Subject::addObserver(const ObserverPattern::Observer* observer)
{
    observers.push_back(observer);
}

void ObserverPattern::Subject::removeObserver(const ObserverPattern::Observer* observer)
{
    auto target = std::find(observers.begin(), observers.end(), observer);
    assert(target != observers.end());
    // here introduce an assumption that observers do not care their order in the vector.
    observers[target - observers.begin()] = *(observers.end() - 1);
    observers.pop_back();
}

void ObserverPattern::Subject::notify() const
{
    for (const ObserverPattern::Observer* observer : observers) {
        observer->onNotify();
    }
}
