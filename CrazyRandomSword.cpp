 /*
 * File: CrazyRandomSword.cpp
 * Author: Cameron <stacy@cs.fsu.edu>
 *
 * Created on October 11, 2017, 10:30pm
 */



 #include "CrazyRandomSword.h"
 #include <math.h> /* floor(), fmod() */


 int random_num = floor(fmod(rand(), 100+10));

 double CrazyRandomSword::hit(double armor)
 {
	int  random_armor = floor(fmod(rand(), armor/2));
	double damage = hitPoints - random_armor;
	if (damage < 0) return 0;
	
	return damage;
 } 

