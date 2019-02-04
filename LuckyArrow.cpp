/*
 * File:   LuckyArrow.cpp
 * Author: Spencer Lewis <srl16@my.fsu.edu>
 *
 * Created on February 3, 2019, 7:00 PM
 */

#include "LuckyArrow.h"

double LuckyArrow::hit(double armor) {
    double damage;
    int x = rand() % 2;
    if (x == 0)
    {
        damage = hitPoints - armor;
    }
    else
    {
        damage = hitPoints;
    }
    if (damage < 0) {
        return 0;
    }
    return damage;
}

