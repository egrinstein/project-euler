
using namespace std ;

#include <cstdio>

class point
{
	public:
	int x,y;


	void set_values(int a,int b)
	{
		x=a;
		y=b;
	}
};
class particle : public point 
{
	public:
	void move_down( void )
	{
		y -= 1;
	}
	void move_right( void )
	{
		x += 1;
	}
};







int count_path( particle part , point pnt )
{
	if ( part.x == pnt.x && part.y == pnt.y ) return 1 ;
	if ( part.x > pnt.x || part.y < pnt.y ) return 0 ;

	particle part_down, part_right;
	part_down.set_values(part.x,part.y-1);
	part_right.set_values(part.x+1,part.y);

	return count_path(part_down,pnt) + count_path(part_right,pnt) ;
} 


int main( void )
{
	particle part, goal ;
	part.set_values(0,0);
	goal.set_values(20,-20);
	int paths = count_path( part, goal);

	printf("%d\n",paths);
  
	return 0 ;
}





