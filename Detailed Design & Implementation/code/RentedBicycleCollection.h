#ifndef RENTED_BICYCLE_COLLECTION_H
#define RENTED_BICYCLE_COLLECTION_H

#include <string>
#include <iostream>

#include "Bicycle.h"
#include "ViewRentedBicyclesUI.h"

class RentedBicycleCollection
{
private:
	Bicycle [*] rented_bicycles_;

	int rented_bicycle_count_;

	Bicycle bicycle[];
	ViewRentedBicyclesUI viewRentedBicyclesUI;

public:
	void addBicycle(Bicycle bike);

	void listAllBicycles(ViewRentedBicyclesUI* view_rented_bicycles_ui_ptr);

};
#endif
