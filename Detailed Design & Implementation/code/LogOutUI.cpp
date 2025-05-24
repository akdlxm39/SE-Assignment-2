#include "LogOutUI.h"
#include "LogOut.h"

/*
	�Լ� �̸� : LogOutUI::setID()
	���	  : ȸ���� ID�� ������
	���� ���� : string -> ID
	��ȯ��    : ����
*/
void LogOutUI::setID(string id)
{
	id_ = id;
}

/*
	�Լ� �̸� : LogOutUI::startInterface()
	���	  : LogOutUI ���� (�Է� �̺�Ʈ ����, �α׾ƿ� �� ȸ���� ID ���)
	���� ���� : ����
	��ȯ��    : ����
*/
void LogOutUI::startInterface()
{
	out_fp << "2.2. �α׾ƿ�\n";
	out_fp << "> " << id_ << "\n\n";
}
