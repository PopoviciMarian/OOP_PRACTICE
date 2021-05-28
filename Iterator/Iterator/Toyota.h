#pragma once
#include "Masina.h"
class Toyota :
    public Masina
{
public:
    string color;
    Toyota(const char* s) {
        color = s;
    }
    string GetColor() {
        return color;
    };
    string GetName() {
        return "Toyota";
    }
};

