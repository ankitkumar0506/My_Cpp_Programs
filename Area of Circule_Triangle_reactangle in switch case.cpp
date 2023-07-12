#include<iostream>
#define pi 3.14
using namespace std;

int main()
{
	int choice;
	cout<<"Enter your choice\n\n 1.Circule\n 2.Triangle\n 3.Rectangle"<<endl;
	cin>>choice;
	
	int calculation;
	
	switch(choice)
	{
		case 1:
			cout<<"Enter The Radius of Circul...";
			cin>>calculation;
			cout<<"Your Circule Area is..."<<pi*calculation*calculation;
			break;
			
		case 2:
			int hight;
			cout<<"Enter the length and Higth Triangle...";
			cin>>calculation>>hight;
			cout<<"Your Triangle Area is..."<<hight*calculation/2;
			break;
			
		case 3:
			int lenth;
			int width;
			cout<<"Enter Your Lenth...";
			cin>>lenth;
			cout<<"Enter Your width....";
			cin>>width;
			cout<<"Your Rectangle Area is..."<<lenth*width;
			break;
		
		default :
			cout<<"Enter Valid Choice";
	}
}