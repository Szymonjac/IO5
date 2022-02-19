#pragma once

#ifndef PROGRAMISTA__H
#define PROGRAMISTA__H

#include <string>
#include "user.h"

#define Program void*

class programista : public user
{
   void addProgram(Program program);
   Program getResults(std::string progra);
};

#endif /*PROGRAMISTA__H*/