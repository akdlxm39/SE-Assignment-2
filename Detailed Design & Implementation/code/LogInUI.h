#ifndef LOG_IN_UI_H
#define LOG_IN_UI_H

#include <string>
#include "LogIn.h"
using namespace std;

class LogInUI
{
private:
	LogIn* log_in_ptr_;

	LogIn logIn;

public:
	LogInUI(LogIn* log_in_ptr);

	string getID();

	string getPassword();

	void startInterface();

	void logIn();

};
#endif
