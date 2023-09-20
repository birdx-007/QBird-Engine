#pragma once
#define NONASSIGNABLE(Class) Class& operator=(const Class &) = delete;
