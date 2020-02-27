#include "Command_Shell.h"


#include <iostream>


void main()
{
	system("color 03");
	
	std::cout << "\n\n\t *** You have turned the computer on ***\n\n";
	std::cout << "\t *** WOULD YOU LIKE TO PLAY A GAME? ***\n\n";

	Command_Shell command_shell;
	std::cout << "What is your command?\n";
	std::string userCommand;
	getline(std::cin, userCommand);

	command_shell.IntakeFromUser(userCommand);

}