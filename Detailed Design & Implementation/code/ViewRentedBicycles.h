#ifndef VIEW_RENTED_BICYCLES_H
#define VIEW_RENTED_BICYCLES_H

#include <string>
#include <iostream>

#include "UserManager.h"
#include "ViewRentedBicyclesUI.h"
#include "MemberAccount.h"

class ViewRentedBicycles
{
private:
	UserManager* user_manager_ptr_;

	ViewRentedBicyclesUI* veiw_rented_bicycles_ ui_ptr_;

	ViewRentedBicyclesUI viewRentedBicyclesUI;
	MemberAccount memberAccount;
	UserManager userManager;

public:
	ViewRentedBicycles ViewRentedBicycles(UserManager* user_manager_ptr);

	void run();

};
#endif
