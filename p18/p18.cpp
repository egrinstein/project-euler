#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std ;

void read_triangle( vector<vector<int> > &tri )
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
        tri.push_back(row);
	}
	
}

int exaust( vector<vector<int> > tri, int row,int x, int max_row)
{
    if (row == max_row) return tri[row][x];
    
    int left = tri[row][x] + exaust( tri, row+1,x,max_row );  
    int right= tri[row][x] + exaust( tri, row+1,x+1,max_row );
    
    return max(left,right); 
}



int  main()
{
    clock_t start,end ;
    vector<vector<int> > triangle;
    read_triangle( triangle );

    start = clock();

    int answer = exaust( triangle, 0,0,14 );

    end = clock();
    
    cout << answer << '\n';

    cout << ((double)(end-start))/CLOCKS_PER_SEC << '\n';
    return 0 ;
}

/*
int main()
{
	vector<vector<int> > triangle;

	read_triangle( triangle  );
    for (vector<vector<int> >::size_type i=0; i<triangle.size(); i++ )
    {
        for (vector<int>::size_type j=0; j<triangle[i].size(); j++ )
            cout << triangle[i][j] << ' ';
        cout << endl;
    }
}
*/

