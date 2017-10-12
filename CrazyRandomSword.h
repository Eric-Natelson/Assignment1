/*
 * File:   CrazyRandomSword.h
 * Author: Eric (ejn13@my.fsu.edu)
 *
 * Created on October 10, 2017, 8:15 AM
 */

 #include <string>
 #include "Weapon.h"
 #include <stdlib.h>     /* srand, rand */
 #include <time.h>       /* time */

 #ifndef CRAZYRANDOMSWORD_H
 #define CRAZYRANDOMSWORD_H

 /**
  * Defines the behavior of a crazy random sword (hitpoints = random integer number between 10
and 100. Ignores a random amount of integer armor points, ranging from to 0 to
half of the armor the weapon hits.)
  */

 class CrazyRandomSword : public Weapon {
 public:

     CrazyRandomSword() : Weapon("Crazy random sword", 0.0) {
     }
     virtual ~CrazyRandomSword() {};
     virtual double hit(double armor);

 };

 #endif /* CRAZYRANDOMSWORD_H */
