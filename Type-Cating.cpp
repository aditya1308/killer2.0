/*
Type-Casting 

-> Basic To class Type
-> Class to basic type
-> Class to class type

*/

#include<iostream>
using namespace std;

class one
{
	int e=3;
	public:
		int get()
		{
			return(e);
			
		}
		void put(int c)
		{
			e =c;
		}
		operator int()
		{
			return(e);
		}
};

class two
{
	int y=5;
	float z=0;
	public:
		operator=(one& a)
		{
			y=a.get();
		}
		void show()
		{
			cout<<"y "<<y<<" z "<<z<<endl;
		}
		two(){		}
		two(float);
};
two::two(float f)
{
	z=f;
}
int main()
{
	one o;
	two t;
	int first;
	first = o;
	cout<<"first "<<first<<endl;
	t =o;
	t.show();
	t=first;
	t.show();
	
	
}
