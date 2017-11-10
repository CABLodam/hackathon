// Cpp Random Number Generator: 
#include <stdlib.h>


// input should be some random number about the mean value it should output.
int random_temperature_increment(int current_temperature)
{
	int random_increment = (rand() % 100 + 1)/100; // calculate a .01 increase in temperature. 
	return current_temperature + random_increment;
}