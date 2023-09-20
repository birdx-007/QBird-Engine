#pragma once
#define NONCOPYABLE(Class) Class(const Class &) = delete;
