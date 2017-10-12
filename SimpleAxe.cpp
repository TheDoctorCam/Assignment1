 /*
 * File: SimpleAxe.cpp
 * Author: Cameron <stacy@cs.fsu.edu>
 *
 * Created on October 11, 2017, 11:26pm
 */


 #include "SimpleAxe.h"
 

 double SimpleAxe::hit(double armor)
 {
	double damage = hitPoint - armor;
	if (armor > 0 && armor < 20) damage += armor;	//ignores armor if 0 < armor points < 20
	if (damage < 0) return 0;
	
	return damage;

 }
