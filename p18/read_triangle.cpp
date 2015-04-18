#include <iostream>
#include <fstream>
#include <vector>

using namespace std ;

void read_triangle( vector< vector<int> > triangle )
{
	int current_number ;
	int current_line = 1;
	ifstream triangle_file ("tri.txt") ;
	

	
	while (triangle_file >> current_number )
	{
		vector<int> row;
		row.push_back(current_number);
	

		for (int i=1; i< current_line ; i++)
		{
			triangle_file >> current_number;
			row.push_back(current_number);
		}	
		current_line++;	

	}
	
}

int main()
{
	vector< vector<int> > triangle;

	read_triangle( triangle );
    cout << triangle[0][0];
}
