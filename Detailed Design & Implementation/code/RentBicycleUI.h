#ifndef RENT_BICYCLE_U_I_H
#define RENT_BICYCLE_U_I_H

#include <string>
#include <iostream>

#include "RentBicycle.h"
#include "String.h"

class RentBicycleUI
{
private:
	RentBicycle* rent_bicycle_ptr_;

	RentBicycle rentBicycle;

public:
	RentBicycleUI RentBicycleUI(RentBicycle rb);

	String getBID();

	void startInterface();

	void selectBicycle();

};
#endif
