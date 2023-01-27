/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "Person.h"
#include "Person.h"


public ref class Empleado: public Person, public Person {
public: 
    property String^ Username;
    property String^ Password;
    property char Gender;
    property String^ Birthday;
    property String^ Schedule;
    property int YearsOfWork;
};

#endif //_EMPLEADO_H
