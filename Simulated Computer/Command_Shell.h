#pragma once
#include <string>
class Command_Shell
{
public:
	void IntakeFromUser(std::string UserInput);

	
private:
	void ProcessCommand(std::string CommandToProcess);
	void DisplayHelp();
	
};

