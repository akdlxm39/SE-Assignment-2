#ifndef LOG_IN_H
#define LOG_IN_H

#include <string>

#include "LogInUI.h"
#include "UserManager.h"

using namespace std;


class LogIn
{
private:

	UserManager* user_manager_ptr_; // UserManager 객체 주소

	LogInUI* log_in_ui_ptr_; // LogInUI 객체 주소


public:

	LogIn(UserManager* user_manager_ptr); // 생성자
	~LogIn(); // 파괴자

	void run(); // LogIn 실행
	void logIn(); // LogInUI에서 로그인하려는 회원의 정보를 전달 받아서, UserManager의 logIn()에 전달

};
#endif
