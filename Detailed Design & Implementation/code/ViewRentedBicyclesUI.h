#ifndef VIEW_RENTED_BICYCLES_U_I_H
#define VIEW_RENTED_BICYCLES_U_I_H

#include <string>
#include <iostream>

#include "String.h"

class ViewRentedBicyclesUI
{
public:
	ViewRentedBicyclesUI ViewRentedBicyclesUI();

	void startInterface();

	void addBicycleInfo(String bid, String bname);

};
#endif
