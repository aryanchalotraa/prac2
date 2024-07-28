/*
car parking
1. park car
2. park bike
3. park rikshaw
4. exit
do you want o park again (y/n)
*/
#include<iostream>

using namespace std;
int main(){
   
	string c="y";
	int car_c=0,rikshaw_c=0,bike_c=0;

	do{
		cout<<"Car parking\n1. park car\n2. park bike\n3. park rikshaw\n4. exit\nEnter choice: " ;
		int choice=0;
		cin>>choice;
		if (choice==4){
			break;
		}
		switch(choice){
			case 1:
				car_c+=1;
				break;
			case 2:
				bike_c+=1;
				break;
			case 3:
				rikshaw_c+=1;
				break;
		}
		cout<<"Do you want to park again? (y/n): ";
		cin>>c;


	}while(c=="y"|| c=="Y");

	cout<<"Total cars:"<<car_c<<endl;
	cout<<"Total bikes:"<<bike_c<<endl;
	cout<<"Total rikshaws:"<<rikshaw_c<<endl;
}