#pragma once
#include "Masina.h"
class FerrariRosu :
    public Masina
{
public:

    string GetColor() {
        return "rosu";
    };
    string GetName() {
        return "Ferrari";
    }
};

