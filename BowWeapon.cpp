/*
 * File:   BowWeapon.cpp
 * Author: Eric (ejn13@my.fsu.edu)
 *
 * Created on October 10, 2017, 8:15 AM
 *
 * If the multiplier is an even number the weapon hits three times
 * If not, only returns the normal hit value
 * Ignores armor
 */

 #include "BowWeapon.h"

double BowWeapon::hit(double armor){

  srand (time(NULL));
  int multiplierVal = rand() % 10;

  if(armor > 0 && multiplierVal == 0){
      double damage = (hitPoints * 3);

      return damage;
  }

  if (damage < 0) {
      return 0;
  }

  return damage;
}
