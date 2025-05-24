#ifndef LOG_IN_H
#define LOG_IN_H

#include <string>

#include "LogInUI.h"
#include "UserManager.h"

using namespace std;


class LogIn
{
private:

	UserManager* user_manager_ptr_; // UserManager ��ü �ּ�

	LogInUI* log_in_ui_ptr_; // LogInUI ��ü �ּ�


public:

	LogIn(UserManager* user_manager_ptr); // ������
	~LogIn(); // �ı���

	void run(); // LogIn ����
	void logIn(); // LogInUI���� �α����Ϸ��� ȸ���� ������ ���� �޾Ƽ�, UserManager�� logIn()�� ����

};
#endif
