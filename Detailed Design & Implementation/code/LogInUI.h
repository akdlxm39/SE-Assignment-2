#ifndef LOG_IN_UI_H
#define LOG_IN_UI_H

#include <string>

#include "fileio.h"

using namespace std;

class LogIn;

class LogInUI
{
private:

	LogIn* log_in_ptr_; // LogIn ��ü �ּ�

	string id_; // �α��� �Ϸ��� ȸ���� ID
	string password_; // �α��� �Ϸ��� ȸ���� ��й�ȣ

public:
	LogInUI(LogIn* log_in_ptr); // ������

	string getID(); // ID ��ȯ
	string getPassword(); // ��й�ȣ ��ȯ

	void startInterface(); // LogInUI ����
	void logIn(); // �α��� ȸ�� ���� �Է� �̺�Ʈ ó�� �Լ�

};
#endif
