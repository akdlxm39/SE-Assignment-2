#ifndef LOG_IN_H
#define LOG_IN_H

#include <string>
#include <iostream>

#include "UserManager.h"
#include "LogInUI.h"

class LogIn
{
private:
	UserManager* user_manager_ptr_;

	LogInUI* log_in_ui_ptr_;

	UserManager userManager;
	LogInUI logInUI;

public:
	LogIn LogIn(UserManager* user_manager_ptr);

	void run();

	void logIn();

};
#endif
