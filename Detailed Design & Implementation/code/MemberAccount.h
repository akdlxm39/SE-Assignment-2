#ifndef MEMBER_ACCOUNT_H
#define MEMBER_ACCOUNT_H

#include <string>
#include <iostream>

#include "String.h"
#include "RentedBicycleCollection.h"
#include "ViewRentedBicyclesUI.h"
#include "Bicycle.h"

class MemberAccount
{
private:
	String id_;

	String password_;

	String phone_number_;

	RentedBicycleCollection rented_bicycle_collection_ptr_;

	RentedBicycleCollection rentedBicycleCollection;
	ViewRentedBicyclesUI viewRentedBicyclesUI;

public:
	MemberAccount MemberAccount(String id, String password, String phone_number);

	String getID();

	bool isMatched(String id, String password);

	void rent(Bicycle bicycle);

	void listAllRentedBicycles(ViewRentedBicyclesUI* view_rented_bicycles_ui_ptr);

};
#endif
