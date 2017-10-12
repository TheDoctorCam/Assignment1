 /*
  * File: SimpleAxe.h
  * Author: Cameron <stacy@cs.fsu.edu>
  *
  * Created on October 11, 2017 11:00pm
  */

 #include <string>
 #include "Weapon.h"

 #ifndef SIMPLEAXE_H
 #define SIMPLEAXE_H

 class SimpleAxe : public Weapon {
 public:
	SimpleAxe() : Weapon("SimpleAxe", 60.0) {}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);

 };

 #endif /* SIMPLEAXE_H */
