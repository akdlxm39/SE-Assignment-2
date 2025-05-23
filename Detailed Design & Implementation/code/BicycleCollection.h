#ifndef BICYCLE_COLLECTION_H
#define BICYCLE_COLLECTION_H

#include <string>
#include <iostream>

#include "Bicycle.h"

class BicycleCollection
{
private:
	Bicycle* bicycles_[];

public:
	BicycleCollection();

	void addNewBicycle(string bid, string model_name);

	Bicycle* getBicycle(string bid);

};
#endif
