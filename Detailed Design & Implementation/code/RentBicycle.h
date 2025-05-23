#ifndef RENT_BICYCLE_H
#define RENT_BICYCLE_H

#include <string>
#include <iostream>

#include "UserManager.h"
#include "BicycleCollection.h"
#include "RentBicycleUI.h"
#include "MemberAccount.h"

class RentBicycle
{
private:
	UserManager* user_manager_ptr_;

	BicycleCollection* bicycle_collection_ptr_;

	RentBicycleUI rent_bicycle_ui_ptr_;

	RentBicycleUI rentBicycleUI;
	MemberAccount memberAccount;
	UserManager userManager;
	BicycleCollection bicycleCollection;

public:
	RentBicycle RentBicycle(UserManager* user_manager_ptr, BicycleCollection* bicycle_collection_ptr);

	void run();

	void rentBicycle();

};
#endif
