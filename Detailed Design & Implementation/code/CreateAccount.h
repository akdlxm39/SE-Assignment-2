#ifndef CREATE_ACCOUNT_H
#define CREATE_ACCOUNT_H

#include <string>

#include "CreateAccountUI.h"
#include "MemberAccountCollection.h"

using namespace std;

class CreateAccount
{
private:

	MemberAccountCollection* member_account_collection_ptr_; // MemberAccountCollection ��ü �ּ�

	CreateAccountUI* create_account_ui_ptr_; // CreateAccountUI ��ü �ּ�

public:

	CreateAccount(MemberAccountCollection* member_account_collection_ptr); // ������

	~CreateAccount(); // �ı���

	void run(); // CreateAccount ����

	void createNewAccount(); // CreateAccount ��ü���� ȸ�� ������ ���޹޾Ƽ�, MemberAccountCollection�� createNewAccount()�� ����

};
#endif
