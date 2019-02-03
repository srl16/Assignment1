/*
 * File:   SimpleHammer.cpp
 * Author: Spencer Lewis <srl16@my.fsu.edu>
 *
 * Created on February 2, 2019, 4:20 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage;
    if(armor < 30){
        damage = hitPoints;
        return damage;
    }
    damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}
