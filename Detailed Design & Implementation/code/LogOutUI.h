#ifndef LOG_OUT_UI_H
#define LOG_OUT_UI_H

#include <string>

#include "fileio.h"

using namespace std;

class LogOut;

class LogOutUI
{
private:

	string id_ = ""; // �α׾ƿ��Ϸ��� ȸ���� ID, ""�� �ʱ�ȭ

public:

	void setID(string id); // ID ����

	void startInterface(); // LogOutUI ����

};
#endif
