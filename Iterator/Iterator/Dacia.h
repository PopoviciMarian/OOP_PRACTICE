#pragma once
#include "Masina.h"
class Dacia :
    public Masina{
public:
    string color;
    Dacia(const char* s) {
        color = s;
    }
    string GetColor(){
        return color;
    };
    string GetName() {
        return "Dacia";
    }
};

