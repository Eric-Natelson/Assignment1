/*
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *
 */

#include <string>
#include <stddef.h>
#include "WeaponFactory.h"
#include "CommonSword.h"
#include "CommonSpear.h"
#include "CrazyRandomSword.h"
#include "BowWeapon.h"
#include "SimpleAxe"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }
    if (name.compare("Simple Axe") == 0) {
        return new SimpleAxe();
    }
    if (name.compare("Crazy random sword") == 0) {
        return new CrazyRandomSword();
    }
    if (name.compare("Bow weapon") == 0) {
        return new BowWeapon();
    }
    throw "Invalid weapon";
}
