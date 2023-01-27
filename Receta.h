/**
 * Project Untitled
 */
#ifndef _RECETA_H
#define _RECETA_H

#include "Farmaceutico.h"
using namespace system;

namespace HealthyStyleModel{
    class Receta: public Farmaceutico {
    public: 
        String^ Date;
        String^ Description;
        double Total;
    };
}

#endif //_RECETA_H
