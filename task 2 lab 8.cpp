#include<iostream>
using namespace std;
int main()
{
	int choice;
	  do{
	  	cout<<"menu:"<<endl;
	  	cout<<"1. say bilal"<<endl;
	  	cout<<"2.say goodbye"<<endl;
	  	cout<<"3.exit"<<endl;
	  	cout<<"enter your choice:"<<endl;
	  	cin>>choice;
	  	switch(choice){
	  		case 1:
	  			cout<<"bilal"<<endl;
	  			break;
	  		case 2:
	  			cout<<"goodbye"<<endl;
	  			break;
	  		case 3:
	  			cout<<"exit"<<endl;
	  			break;
	  		default:
	  			cout<<"invalid choice"<<endl;
	  	}
	  }while(choice!=3);
	  return 0;	
}
