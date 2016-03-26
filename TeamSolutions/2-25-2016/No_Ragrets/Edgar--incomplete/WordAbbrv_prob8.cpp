// WordAbbrv.cpp : Defines the entry point for the console application.
//edgar gallo

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int _tmain()
{
	string fromfile;
	fstream getTxt ("C:\\TextFile\\file.txt");
	string abbrv;

	//getTxt.open("file.txt");
	if(getTxt.fail())
		cout << "unable to open\n";

	else if(getTxt.is_open())
	{
		while(!getTxt.eof()){
			getline(getTxt, fromfile);
		}
	}
	cout << fromfile;
	getTxt.close();

	for (int i = 0; i < fromfile.length(); i++)
	{
		if (fromfile[i] != fromfile[i-1])
		{
		abbrv += fromfile[i];
		}
	}

	system("pause");
	return 0;
}

