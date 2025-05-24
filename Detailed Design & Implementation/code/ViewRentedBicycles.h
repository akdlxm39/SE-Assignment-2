#ifndef VIEW_RENTED_BICYCLES_H
#define VIEW_RENTED_BICYCLES_H

#include "UserManager.h"
#include "ViewRentedBicyclesUI.h"
#include "MemberAccount.h"

using namespace std;

class ViewRentedBicycles
{
private:

	UserManager* user_manager_ptr_;

	ViewRentedBicyclesUI* veiw_rented_bicycles_ui_ptr_;

public:

	ViewRentedBicycles(UserManager* user_manager_ptr);
	~ViewRentedBicycles();

	void run();

};
#endif
