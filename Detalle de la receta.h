/**
 * 
 */

#pragma once

#include Receta.h
using namespace System;
 
namespace HealthStyleModel{
    public ref class Detalle de la receta: public Receta {
    public: 
        property int Id;
        property int Quantity;
        property double SubTotal;
        property double UnitPrice;
    };
};

