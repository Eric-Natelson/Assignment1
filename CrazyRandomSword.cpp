/*
 * File:   CrazyRandomSword.cpp
 * Author: Eric (ejn13@my.fsu.edu)
 *
 * Created on October 10, 2017, 8:15 AM
 */


#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){

  std::srand(time(NULL));
  hitPoints = rand() % 91 + 10;


  double damage = hitPoints - (armor - (1.0 - (rand()%51)*0.01));

  if (damage < 0) {
      return 0;
  }

  return damage;
}
