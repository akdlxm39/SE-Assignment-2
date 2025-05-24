#include "LogInUI.h"
#include "LogIn.h"

/*
	�Լ� �̸� : LogInUI::LogInUI()
	���	  : ������ (LogIn ��ü �ּ� ����)
	���� ���� : LogIn* -> LogIn�� logIn() ȣ���� ���� �ּ�
	��ȯ��    : ����
*/
LogInUI::LogInUI(LogIn* log_in_ptr)
{
	log_in_ptr_ = log_in_ptr;
}

/*
	�Լ� �̸� : LogInUI::getID()
	���	  : ID�� ��ȯ��
	���� ���� : ����
	��ȯ��    : string -> ID
*/
string LogInUI::getID()
{
	return id_;
}

/*
	�Լ� �̸� : LogInUI::getPassword()
	���	  : ��й�ȣ�� ��ȯ��
	���� ���� : ����
	��ȯ��    : string -> ��й�ȣ
*/
string LogInUI::getPassword()
{
	return password_;
}

/*
	�Լ� �̸� : LogInUI::startInterface()
	���	  : LogInUI ���� (ȸ�� ���� �Է� ���, �Է� �� LogInUI::logIn() �̺�Ʈ �߻�)
	���� ���� : ����
	��ȯ��    : ����
*/
void LogInUI::startInterface()
{
	// cout << "�α��� �Ϸ��� ȸ���� ID�� ��й�ȣ�� �Է����ּ���.\n����) kim pwdpwd\n";
	// cin >> id_ >> password_;
	in_fp >> id_ >> password_;

	logIn();
}

/*
	�Լ� �̸� : LogInUI::logIn()
	���	  : �̺�Ʈ �߻� ��, LogIn�� logIn()�� ȣ���Ͽ� �̺�Ʈ�� �߻������� �˸�
				�̺�Ʈ�� ���� ó�� �Ϸ� ��, �α����� ȸ���� ������ ���
	���� ���� : ����
	��ȯ��    : ����
*/
void LogInUI::logIn()
{
	log_in_ptr_->logIn();

	out_fp << "2.1. �α���\n";
	out_fp << "> " << id_ << " " << password_ << "\n\n";
}
