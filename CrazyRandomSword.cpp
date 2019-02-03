/*
 * File:   CrazyRandomSword.cpp
 * Author: Spencer Lewis <srl16@my.fsu.edu>
 *
 * Created on February 3, 2019, 1:00 PM
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    double x = armor / 3;
    int result = floor(x);
    double damage = hitPoints - ((rand() % result) + 2);
    if (damage < 0) {
        return 0;
    }
    return damage;
}

