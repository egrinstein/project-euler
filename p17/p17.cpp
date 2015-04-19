#include <iostream>
#include <unordered_map>

using namespace std ;

void create_num_name_map( unordered_map<int,string> &num_name )
{
    string first_names[21] = { "zero", "one", "two", "three", "four", 
                               "five", "six", "seven", "eight",
                                "nine","ten", "eleven", "twelve", "thirteen", 
                                "fourteen", "fifteen", "sixteen", "eighteen", 
                                "nineteen" } ;
    string dozens[8] = { "twenty", "thirty", "forty", "fifty", 
                         "sixty", "seventy", "eighty", "ninety" } ;        

    for ( i=0 ; i<20 ; i++ )
    {
        num_name.emplace( i, first_names[i] ) ;
    }

    for (i=2 ; i<10 ; i++ )
    {
        num_name.emplace( 10*i, dozens[i-2] ) ;
    }

    num_name.emplace( 1000,"one thousand" ) ;

}



int numberToWords( int number )
{
    unordered_map<int,string> num_to_name ;
    fill_num_name_map( num_to_name ) ;

    if ( number > 1000 )
    {
        cout << "Function not prepared for this number"
    }
    
}


int main( void )
{
    return 0 ;
}
