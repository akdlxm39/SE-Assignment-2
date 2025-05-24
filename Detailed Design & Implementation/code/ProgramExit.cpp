#include "ProgramExit.h"

/*
	�Լ� �̸� : ProgramExit::ProgramExit()
	���	  : ������ (UserManager ��ü �ּ� ����, LogOutUI ��ü ���� �G �ּ� ����)
	���� ���� : UserManager* -> UserManager::logOut() ������ ���� �ּ�
	��ȯ��    : ����
*/
ProgramExit::ProgramExit(int* is_program_exit_ptr)
{
	is_program_exit_ptr_ = is_program_exit_ptr;
	program_exit_ui_ptr_ = new ProgramExitUI();
}

/*
	�Լ� �̸� : ProgramExit::~ProgramExit()
	���	  : �ı��� (LogOutUI ��ü ����)
	���� ���� : ����
	��ȯ��    : ����
*/
ProgramExit::~ProgramExit()
{
	delete program_exit_ui_ptr_;
}
/*
	�Լ� �̸� : ProgramExit::run()
	���	  : control ��ü ����, ProgramExitUI::startInterface() ȣ��
	���� ���� : ����
	��ȯ��    : ����
*/
void ProgramExit::run()
{
	*is_program_exit_ptr_ = 1;
	program_exit_ui_ptr_->startInterface();
}

