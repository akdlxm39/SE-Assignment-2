#ifndef LOG_OUT_H
#define LOG_OUT_H

#include "LogOutUI.h"
#include "UserManager.h"

using namespace std;

class LogOut
{
private:

	UserManager* user_manager_ptr_; // UserManager 按眉 林家

	LogOutUI* log_out_ui_ptr_; // LogOutUI 按眉 林家

public:

	LogOut(UserManager* user_manager_ptr); // 积己磊
	~LogOut(); // 颇鲍磊

	void run(); // LogOut 角青

};
#endif
