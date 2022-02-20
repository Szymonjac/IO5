#pragma once

#ifndef PROGRAMMER__H
#define PROGRAMMER__H

#include <string>
#include "user.h"

#define Program void*

class programmer : public user
{
   void addProgram(Program program);
   Program getResults(std::string progra);
};

#endif /*PROGRAMISTA__H*/