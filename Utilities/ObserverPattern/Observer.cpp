#include "Observer.h"

Observer::Observer(std::function<void()> f)
    :actionOnNotify(f)
{
}

void Observer::onNotify() const
{
    actionOnNotify();
}
