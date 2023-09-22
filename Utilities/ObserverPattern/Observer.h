#pragma once
#include <functional>
namespace ObserverPattern {
    class Observer
    {
    public:
        Observer(std::function<void()> f = []() {});
        void onNotify() const; // no subjects should change observer's internal state
    private:
        std::function<void()> actionOnNotify;
    };
};

