/*
 * File:   SimpleHammer.h
 * Author: Spencer <srl16@my.fsu.edu>
 *
 * Created on February 3, 2019, 1:00 PM
 */

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

#include <stdio.h>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "Weapon.h"

/**
 * Defines the behavior of a crazy random sword (hitpoint = random int between 7 and 100, it ignores a random number of
 armour points ranging from 2 to 1/3 * armor the weapon hits)
 */

class CrazyRandomSword : public Weapon {
    
public:
    
    CrazyRandomSword() : Weapon("Crazy Random Sword", (rand() % 94) + 7) { //Calls Weapon(name, hitpoints) with values Crazy Random Sword and random
    }
    
    virtual ~CrazyRandomSword() {};
    
    virtual double hit(double armor);
    
};

#endif /* CRAZYRANDOMSWORD_H */
