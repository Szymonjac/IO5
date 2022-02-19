#pragma once
#ifndef SERVICE__H
#define SERVICE__H

#include "user.h"
class serwisant : public user
{
void setPriority(int priority, int );
void acceptProgram(int priority, int );
void discardProgram(int priorityint );

};

#endif