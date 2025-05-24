#include "LogIn.h"

/*
	�Լ� �̸� : LogIn::LogIn()
	���	  : ������ (UserManager ��ü �ּ� ����, LogInUI ��ü ���� �G �ּ� ����)
	���� ���� : UserManager* -> UserManager::logIn() ȣ���� ���� �ּ�
	��ȯ��    : ����
*/
LogIn::LogIn(UserManager* user_manager_ptr)
{
	user_manager_ptr_ = user_manager_ptr;
	log_in_ui_ptr_ = new LogInUI(this);
}

/*
	�Լ� �̸� : LogIn::~LogIn()
	���	  : �ı��� (LogInUI ��ü ����)
	���� ���� : ����
	��ȯ��    : ����
*/
LogIn::~LogIn()
{
	delete log_in_ui_ptr_;
}

/*
	�Լ� �̸� : LogIn::run()
	���	  : control ��ü ����, LogInUI::startInterface() ȣ��
	���� ���� : ����
	��ȯ��    : ����
*/
void LogIn::run()
{
	log_in_ui_ptr_->startInterface();
}

/*
	�Լ� �̸� : LogIn::logIn()
	���	  : LogInUI ��ü���� id�� password�� ���޹޾Ƽ�, UserManager::logIn()�� ȣ��
	���� ���� : ����
	��ȯ��    : ����
*/
void LogIn::logIn()
{
	string id = log_in_ui_ptr_->getID();
	string password = log_in_ui_ptr_->getPassword();

	user_manager_ptr_->logIn(id, password);
}
