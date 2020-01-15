#ifndef UTILS_HPP
#define ITILS_HPP

#define LOG

#include <iostream>

void log( std::string message )
{
#ifdef LOG
	std::cout << "LOG : " + message << std::endl;
#endif
}

#endif