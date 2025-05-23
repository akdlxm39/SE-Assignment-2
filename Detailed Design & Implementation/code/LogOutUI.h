#ifndef LOG_OUT_U_I_H
#define LOG_OUT_U_I_H

#include <string>
#include <iostream>

#include "LogOut.h"
#include "String.h"

class LogOutUI
{
private:
	LogOut* log_out_ptr_;

	LogOut logOut;

public:
	LogOutUI LogOutUI(LogOut* log_out_ptr);

	void logOut();

	void setID(String id);

};
#endif
