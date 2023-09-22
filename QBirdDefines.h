#pragma once
#define QBIRD_GAME_CLASS_NAME Game
#define QBIRD_GAME_SINGLETON(Class) \
public: \
    friend class QBIRD_GAME_CLASS_NAME; \
    Class(const Class&) = delete; \
    Class(Class&&) = delete; \
    Class& operator=(const Class&) = delete; \
    Class& operator=(Class&&) = delete; \
private: \
    Class(); \
    ~Class();
