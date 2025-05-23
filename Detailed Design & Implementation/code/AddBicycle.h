#ifndef ADD_BICYCLE_H
#define ADD_BICYCLE_H

#include <string>
#include <iostream>

#include "BicycleCollection.h"
#include "AddBicycleUI.h"

class AddBicycle
{
private:
	BicycleCollection* bicycle_collection_ptr_;

	AddBicycleUI* add_bicycle_ui_ptr_;

	AddBicycleUI addBicycleUI;
	BicycleCollection bicycleCollection;

public:
	AddBicycle AddBicycle(BicycleCollection* bicycle_collection_ptr);

	void run();

	void addNewBicycle();

};
#endif
