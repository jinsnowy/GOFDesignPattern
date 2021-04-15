#pragma once
#include <exception>
class IteratorOutOfBounds :
    public std::exception
{
public:
    IteratorOutOfBounds() = default;
    ~IteratorOutOfBounds() = default;
    virtual char const* what() const override
    {
        return "Iterator is Out of Boundary";
    }
};