 /*
  * File: OddSword.h
  * Author: Cameron <stacy@cs.fsu.edu>
  *
  * Created on October 11, 2017 11:00pm
  */

 #include <string>
 #include "Weapon.h"

 #ifndef ODDSWORD_H
 #define ODDSWORD_H

 class OddSword : public Weapon {
 public:
	OddSword() : Weapon("Odd Sword", 49.0) {}
	virtual ~OddSword() {};
	virtual double hit(double armor);

 };

 #endif /* ODDSWORD_H */
