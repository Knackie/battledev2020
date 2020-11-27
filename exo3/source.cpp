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
   vector <int> niveau;
   vector <int> parent;
   vector <int> etat;
   vector <int> max;
   int nb_agent =0;
	while (std::getline(std::cin, line))
	{
	    if(nb_agent == 0)
        {
            nb_agent = atoi( line.substr(0,1).c_str());
        }
        else
        {
            int space = line.find(" ");
            niveau.push_back(atoi( line.substr(0,space).c_str()));
            parent.push_back(atoi( line.substr(space).c_str()));
        }
	    cerr <<line <<endl;
	    //cerr <<parent[0] <<endl;
		/*Lisez les données ici et effectuez votre traitement ici */
	}
	for (int i =0; i < 10; i++)
	{
		if (i ==0)
		{
			etat.push_back(1);
		}
		else {
			etat.push_back(0);
		}
	}
	
	for (int n = 1; n < 11; n++)
	{
	
	for (int i = 0; i < niveau.size();i++)
	{
	     if (parent[i] == 0)
	    {
	    etat[n]++;
	    max.push_back(niveau[i]);
	    parent[i]--;
	}
	}
	
	 for (int i = 0; i < niveau.size();i++)
	{
	    for(int j = 0 ; j < max.size(); j++)
	    {
	    if (parent[i] == max[j])
	    {
	        parent[i] = 0;
	    }
	}
	}
	 max.clear();
	}
	
	
	
	for (int i = 0; i < etat.size(); i++)
	{
	cout << etat[i] << " ";
	}
	/* Vous pouvez aussi effectuer votre traitement une fois que vous avez lu toutes les données.*/
}
