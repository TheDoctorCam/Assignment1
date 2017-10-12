 /*
 * File: CrazyRandomSword.cpp
 * Author: Cameron <stacy@cs.fsu.edu>
 *
 * Created on October 11, 2017, 10:30pm
 */



 #include "CrazyRandomSword.h"
 #include <math.h> /* floor function */


 int random_num = floor(rand() % 100 + 10);

 double CrazyRandomSword::hit(double armor)
 {
	double random_armor = floor(rand() % armor/2.0);
	double damage = hitPoints - random_armor;
	if (damage < 0) return 0;
	
	return damage;
 } 

