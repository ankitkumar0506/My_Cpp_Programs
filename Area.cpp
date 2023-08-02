#include<iostream>
#include<string>
using namespace std;



class radius
{
	public :
		void circule()
		{
			cout<<"circule"<<endl;	
		}	
		void Triangle()
		{
			cout<<"Triangle"<<endl;	
		}	
		void Reatangle()
		{
			cout<<"Reatangle"<<endl;	
		}	
	
};

int main()
{

radius area;

area.circule();
area.Triangle();
area.Reatangle();

}