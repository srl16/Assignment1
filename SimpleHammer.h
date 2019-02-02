/*
 * File:   SimpleHammer.h
 * Author: Spencer <srl16@my.fsu.edu>
 *
 * Created on February 2, 2019, 4:20 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a common spear (hitpoint = 25, it ignores all armour points
 if the armour is less than 30)
 */
class SimpleHammer : public Weapon {
public:
    
    SimpleHammer() : Weapon("Simple Hammer", 25.0) { //Calls Weapon(name, hitpoints) with values Simple Hammer and 25.0
    }
    
    virtual ~SimpleHammer() {};
    
    virtual double hit(double armor);
    
};

#endif /* SIMPLEHAMMER_H */
