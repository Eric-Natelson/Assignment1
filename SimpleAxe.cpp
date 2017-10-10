/*
 * File:   SimpleAxe.cpp
 * Author: Eric (ejn13@my.fsu.edu)
 *
 * Created on October 10, 2017, 8:15 AM
 */

 #include "SimpleAxe.h"

double SimpleAxe::hit(double armor){

  if(armor > 0 && armor < 20){
      double damage = hitPoints;

      return damage;
  }
  else double damage = (hitPoints - armor);

  if (damage < 0) {
      return 0;
  }

  return damage;
}
