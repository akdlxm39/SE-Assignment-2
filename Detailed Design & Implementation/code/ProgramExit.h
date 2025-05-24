#ifndef PROGRAM_EXIT_H
#define PROGRAM_EXIT_H

#include "ProgramExitUI.h"

using namespace std;

class ProgramExit
{
private:

	int* is_program_exit_ptr_; // is_program_exit 林家

	ProgramExitUI* program_exit_ui_ptr_;

public:

	ProgramExit(int* is_program_exit_ptr); // 积己磊
	~ProgramExit(); // 颇鲍磊

	void run(); // ProgramExit 角青

};
#endif