#ifndef LOG_OUT_UI_H
#define LOG_OUT_UI_H

#include <string>

#include "fileio.h"

using namespace std;

class LogOut;

class LogOutUI
{
private:

	string id_ = ""; // 로그아웃하려는 회원의 ID, ""로 초기화

public:

	void setID(string id); // ID 저장

	void startInterface(); // LogOutUI 실행

};
#endif
