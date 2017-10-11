/*
 * File:   CrazyRandomSword.cpp
 * Author: Eric (ejn13@my.fsu.edu)
 *
 * Created on October 10, 2017, 8:15 AM
 */


#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){

  srand (time(NULL));
  hitPoints = rand() % 91 + 10;


  double damage = hitPoints - (armor - (rand()%101));

  if (damage < 0) {
      return 0;
  }

  return damage;
}
