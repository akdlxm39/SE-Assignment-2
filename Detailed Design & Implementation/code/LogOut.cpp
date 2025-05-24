#include "LogOut.h"

/*
	�Լ� �̸� : LogOut::LogOut()
	���	  : ������ (UserManager ��ü �ּ� ����, LogOutUI ��ü ���� �G �ּ� ����)
	���� ���� : UserManager* -> UserManager::logOut() ������ ���� �ּ�
	��ȯ��    : ����
*/
LogOut::LogOut(UserManager* user_manager_ptr)
{
	user_manager_ptr_ = user_manager_ptr;
	log_out_ui_ptr_ = new LogOutUI();
}

/*
	�Լ� �̸� : LogOut::~LogOut()
	���	  : �ı��� (LogOutUI ��ü ����)
	���� ���� : ����
	��ȯ��    : ����
*/
LogOut::~LogOut()
{
	delete log_out_ui_ptr_;
}
/*
	�Լ� �̸� : LogOut::run()
	���	  : control ��ü ����, UserManager::logOut() ȣ��, LogOutUI::startInterface() ȣ��
	���� ���� : ����
	��ȯ��    : ����
*/
void LogOut::run()
{
	user_manager_ptr_->logOut(log_out_ui_ptr_);
	log_out_ui_ptr_->startInterface();
}

