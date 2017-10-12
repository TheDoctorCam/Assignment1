/*
 * File: OddSword.cpp
 * Author: Cameron <stacy@cs.fsu.edu>
 *
 * Created on October 11, 2017, 11:15pm
 */



 #include "OddSword.h"
 #include <stdlib.h> /* rand() */


 double OddSword::hit(double armor)
 {
	int odd_number = rand() % 10 + 2;
	double damage = hitPoints - armor;
	if(odd_number % 2 != 0) damage += armor;	//If random number is odd, ignore armor
	if (damage < 0) return 0;
	
	return damage;
 } 
