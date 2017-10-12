 /*
  * File: CrazyRandomSword.h
  * Author: Cameron <stacy@cs.fsu.edu>
  *
  * Created on October 11, 2017 10:00pm
  */

 #include <string>
 #include <stdlib.h> /*srand, rand */
 #include "Weapon.h"

 #ifndef CRAZYRANDOMSWORD_H
 #define CRAZYRANDOMSWORD_H

 extern int random_num;	/* Declaration of hit point variable */

 class CrazyRandomSword : public Weapon {
 public:

	CrazyRandomSword() : Weapon("Crazy Random Sword", random_num) {}
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);

 };


 #endif /* CRAZYRANDOMSWORD_H */ 
  
