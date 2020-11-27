/*******
 * Read input from cin
 * Use cout << ... to output your result to STDOUT.
 * Use cerr << ... to output debugging information to STDERR
 * ***/
#include <iostream>
#include <limits>
#include <sstream>
#include <ctype.h>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
   std::string line;
   int fake=0;
	while (std::getline(std::cin, line))
	{
	    if(line.size() > 5)
	    {
	   if (isdigit( line.at( line.size() - 1 ) ) && isdigit( line.at( line.size() - 2 )) && isdigit( line.at( line.size() - 3 ) )&& isdigit( line.at( line.size() - 4))  && isdigit( line.at( line.size() - 5)))
	   {
	       fake++;
	   }
	    }
	    
		/*Lisez les données ici et effectuez votre traitement ici */
	}
	std::cout << fake;

	/* Vous pouvez aussi effectuer votre traitement une fois que vous avez lu toutes les données.*/
}
