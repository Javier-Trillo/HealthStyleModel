/**
 * Project Untitled
 */
#pragma once

#include "Farmaceutico.h"
using namespace system;

namespace HealthyStyleModel{
    public ref class Receta {
    public: 
        String^ Date;
        String^ Description;
        double Total;
        String^ PacientName;
        String^ DoctorName;
    };
}


