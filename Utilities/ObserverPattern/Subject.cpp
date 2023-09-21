#include "Subject.h"
#include <assert.h>

constexpr int OBSERVER_PATTERN_OBSERVERS_INITIAL_SIZE = 5;

Subject::Subject()
{
    observers.reserve(OBSERVER_PATTERN_OBSERVERS_INITIAL_SIZE);
}

void Subject::addObserver(const Observer* observer)
{
    observers.push_back(observer);
}

void Subject::removeObserver(const Observer* observer)
{
    auto target = std::find(observers.begin(), observers.end(), observer);
    assert(target != observers.end());
    // here introduce an assumption that observers do not care their order in the vector.
    observers[target - observers.begin()] = *(observers.end() - 1);
    observers.pop_back();
}

void Subject::notify() const
{
    for (const Observer* observer : observers) {
        observer->onNotify();
    }
}
