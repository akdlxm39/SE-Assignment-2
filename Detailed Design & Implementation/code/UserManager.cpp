#include "UserManager.h"

/*
	�Լ� �̸� : UserManager::UserManager()
	���	  : ������ (MemberAccountCollection ��ü �ּ� ���� �� ������ ��� ���� �ʱ�ȭ)
	���� ���� : MemberAccountCollection* -> MemberAccountCollection�� getMemberAccount() ȣ���� ���� �ּ�
	��ȯ��    : ����
*/
UserManager::UserManager(MemberAccountCollection* member_account_collection_ptr)
{
	member_account_collection_ptr_ = member_account_collection_ptr;
	logged_in_member_ptr_ = nullptr;
	is_admin_ = false;
}

/*
	�Լ� �̸� : UserManager::getMember()
	���	  : ���� �α��� ���� MemberAccount ��ü�� �ּ� ��ȯ
	���� ���� : ����
	��ȯ��    : MemberAccount* -> ���� �α��� ���� ȸ��
*/
MemberAccount* UserManager::getMember()
{
	return logged_in_member_ptr_;
}

/*
	�Լ� �̸� : UserManager::logIn()
	���	  : ȸ���� ID�� ��й�ȣ�� �̿��� �α���
				ID�� ��й�ȣ�� admin �̶��, is_admin_�� true�� ����
				�ƴ϶��, logged_in_member_ptr_�� MemberAccountCollection���� ��ȯ���� MemberAccount ��ü �ּ� ����
	���� ���� : ����
	��ȯ��    : MemberAccount* -> ���� �α��� ���� ȸ��
*/
void UserManager::logIn(string id, string password)
{
	if (id == "admin" && password == "admin") {
		is_admin_ = true;
	} else {
		logged_in_member_ptr_ = member_account_collection_ptr_->getMemberAccount(id, password);
	}
}

/*
	�Լ� �̸� : UserManager::logOut()
	���	  : �α׾ƿ�
				is_admin_�� true���, LogOutUI::setID()�� ���ڷ� "admin"�� �����ϰ�, is_admin_�� false�� ���� 
				�ƴ϶��, LogOutUI::setID()�� ���ڷ� (���� �α׾ƿ��Ϸ��� ����� ID)�� �����ϰ�, logged_in_member_ptr_�� nullptr�� �ʱ�ȭ
	���� ���� : LogOutUI* -> LogOutUI ��ü�� �ּ�
	��ȯ��    : ����
*/
void UserManager::logOut(LogOutUI* log_out_ui_ptr)
{
	string id;
	if (is_admin_) {
		id = "admin";
		is_admin_ = false;
	}
	else {
		id = logged_in_member_ptr_->getID();
		logged_in_member_ptr_ = nullptr;
	}
	log_out_ui_ptr->setID(id);
}
