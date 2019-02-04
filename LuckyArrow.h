/*
 * File:   LuckyArrow.h
 * Author: Spencer <srl16@my.fsu.edu>
 *
 * Created on February 3, 2019, 6:30 PM
 */

#ifndef LUCKYARROW_H
#define LUCKYARROW_H

#include <stdio.h>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "Weapon.h"

/**
 * Defines the behavior of a lucky arrow (hitpoint = random number between 0 and 50,
 it has a 50% chance of ignoring all armor points)
 */

class LuckyArrow : public Weapon {
    
public:
    
    LuckyArrow() : Weapon("Lucky Arrow", (rand() % 51)) { //Calls Weapon(name, hitpoints) with values Lucky Arrow and random
    }
    
    virtual ~LuckyArrow() {};
    
    virtual double hit(double armor);
    
};

#endif /* LUCKYARROW_H */
