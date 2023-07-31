#include<iostream>
#include<string>
using namespace std;
string choice;

string name;
int age;

class cricketer
{
	public :
//		cricketer()
//		{
//			cout<<"Enter Your Name..."<<endl;
//			getline(cin,name);
//			cout<<"Enter Your Age..."<<endl;
//			cin>>age;
//			
//			cout<<"Welcome"<<name<<"to our Cricket Team"<<endl;
//			cout<<"Your Age is..."<<age<<endl;
//		}
		void bowler()
		{
			cout<<"Enter Your Wickets...";
		cin>>choice;
		cout<<"Your wickets is..."<<choice<<endl<<endl;
		
		cout<<"Enter Overs...";
		cin>>choice;
		cout<<"Your Overs is..."<<choice<<endl;
		}
};


int main()
{
	cricketer c;
	
	cout<<"Welcome to our Team"<<endl;
	cout<<"Your Role..."<<endl;
	cin>>choice;
	
	cout<<name<<"You Choose..."<<choice<<endl<<endl;
	if(choice == "bowler"|| choice == "Bowler"|| choice == "BOWLER")
	{
		cricketer n;
		n.bowler();
	}
	else
	{
		cout<<"Enter valid choice";
	}
}
	
	
	
	
	
	