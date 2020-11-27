/*******
 * Read input from cin
 * Use cout << ... to output your result to STDOUT.
 * Use cerr << ... to output debugging information to STDERR
 * ***/
#include <iostream>
#include <limits>
#include <sstream>
#include <vector>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}


void ContestExerciseImpl::main() {
   std::string line;
   double tweet = 0;
   double night = 0;
   double day= 0;
   vector <int> heures;
	while (std::getline(std::cin, line))
	{
	    if(tweet == 0)
	    {
	        tweet = atoi( line.substr(0,1).c_str());
	    }
	    else 
	    {
	         cerr << line << endl;
	       
	       // cout << line.substr(0,2) << endl;
	    
	        heures.push_back(atoi( line.substr(0,2).c_str()));
    }
	}
	   // nb_tweets =  stoi(line[0]);
	    //heures.pushback();
	    
		/*Lisez les données ici et effectuez votre traitement ici */
	for (int i = 0; i < heures.size(); i++)
	{
	    if (heures[i] >= 20 || heures[i] < 8 )
	    {
	        night++;
	    }
	    else 
	    {
	        day++;
	    }
	}
	if (night > day)
	cout << "SUSPICIOUS";
	else
	{
	cout << "OK";
	}
	
	

	/* Vous pouvez aussi effectuer votre traitement une fois que vous avez lu toutes les données.*/
}
