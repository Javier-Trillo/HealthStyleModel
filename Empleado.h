/**
 * Project Untitled
 */


#pragma once

#include "Person.h"


public ref class Empleado: public Person{
public: 
    property String^ Username;
    property String^ Password;
    property char Gender;
    property String^ Birthday;
    property String^ Schedule;
    property int YearsOfWork;
};


