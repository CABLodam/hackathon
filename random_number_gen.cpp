// Cpp Random Number Generator: 
#include <stdio.h>
#include <stdlib.h>


int random_temperature_increment(int current_temperature)
{
	int random_increment = (rand() % 100 + 1)/100; // calculate a .01 increase in temperature. 
	return current_temperature + random_increment;
}


// test the stuff. 
int iterCtr = 0;
float test_temperature = 20;

int main()
{
	do {
	test_temperature = random_temperature_increment(test_temperature);
	printf("%f", test_temperature);
	iterCtr++;
	} while (iterCtr > 20);
}

