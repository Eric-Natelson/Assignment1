/*
 * File:   BowWeapon.h
 * Author: Eric (ejn13@my.fsu.edu)
 *
 * Created on October 10, 2017, 8:15 AM
 */

#include <string>
#include "Weapon.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#ifndef BOWWEAPON_H
#define BOWWEAPON_H

/**
 * Defines the behavior of a simple axe (hitpoint = 60, If armor is greater than 0 and less than 20,
the axe will ignore all the armor points.)
 */
class BowWeapon : public Weapon {
public:

    BowWeapon() : Weapon("Bow weapon", 25.0) {
    }
    virtual ~BowWeapon() {};
    virtual double hit(double armor);

};

#endif /* BowWeapon_H */
