#ifndef CREATE_ACCOUNT_UI_H
#define CREATE_ACCOUNT_UI_H

#include <string>

#include "fileio.h"

using namespace std;

class CreateAccount;

class CreateAccountUI
{
private:
	CreateAccount* create_account_ptr_; // CreateAccount ��ü�� �ּ�

	string id_; // �����Ϸ��� ȸ���� ID
	string password_; // �����Ϸ��� ȸ���� ��й�ȣ
	string phone_number_; // �����Ϸ��� ȸ���� ��ȭ��ȣ

public:
	CreateAccountUI(CreateAccount* create_account_ptr); // ������

	string getID(); // ID ��ȯ
	string getPassword(); // ��й�ȣ ��ȯ
	string getPhoneNumber(); // ��ȭ��ȣ ��ȯ

	void startInterface(); // CreateAccountUI ����
	void createNewAccount(); // ȸ������ ���� �Է� �̺�Ʈ ó�� �Լ�

};
#endif
