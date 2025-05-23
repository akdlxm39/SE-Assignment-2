#ifndef ADD_BICYCLE_U_I_H
#define ADD_BICYCLE_U_I_H

#include <string>
#include <iostream>

#include "AddBicycle.h"
#include "String.h"

class AddBicycleUI
{
private:
	AddBicycle* add_bicycle_ptr_;

	String bid_;

	String model_name_;

	AddBicycle addBicycle;

public:
	AddBicycleUI AddBicycleUI(AddBicycle* add_bicycle_ptr);

	String getBID();

	String getModelName();

	void startInterface();

	void addNewBicycle();

};
#endif
