#ifndef LOG_OUT_H
#define LOG_OUT_H

#include <string>
#include <iostream>

#include "UserManager.h"
#include "LogOutUI.h"

class LogOut
{
private:
	UserManager* user_manager_ptr_;

	LogOutUI* log_out_ui_ptr_;

	UserManager userManager;
	LogOutUI logOutUI;

public:
	void LogOut(UserManager* user_manager_ptr);

	void run();

	void logOut();

};
#endif
