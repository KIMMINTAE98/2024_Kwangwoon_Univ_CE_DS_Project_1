#pragma once
#include "SubtitleQueue.h"
#include "SubtitleBST.h"
#include "SectionList.h"
#include <fstream>
using namespace std;

class Manager
{
private:

	ifstream		fcmd;
	ofstream		flog;

public:
	Manager();
	~Manager();

	void Run(const char* command);

	void PrintSuccess(const char* cmd);
	void PrintErrorCode(int num);

	// LOAD
	// QPOP
	// PRINT
	// SECTION
	// DELETE
};
