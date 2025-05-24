#ifndef LOG_OUT_H
#define LOG_OUT_H

#include "LogOutUI.h"
#include "UserManager.h"

using namespace std;

class LogOut
{
private:

	UserManager* user_manager_ptr_; // UserManager ��ü �ּ�

	LogOutUI* log_out_ui_ptr_; // LogOutUI ��ü �ּ�

public:

	LogOut(UserManager* user_manager_ptr); // ������
	~LogOut(); // �ı���

	void run(); // LogOut ����

};
#endif
