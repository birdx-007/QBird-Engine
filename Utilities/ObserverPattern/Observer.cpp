#include "Observer.h"

ObserverPattern::Observer::Observer(std::function<void()> f)
    :actionOnNotify(f)
{
}

void ObserverPattern::Observer::onNotify() const
{
    actionOnNotify();
}
