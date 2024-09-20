// find area and perimeter and check area is lesser .
#include<iostream>
using namespace std;
int main(){
	int length;
	cout<<"Enter length : ";
	cin>>length;
	
	int breadth;
	cout<<"Enter breadth : ";
	cin>>breadth;
	
	int area;
	int perimeter;
	
	area= length*breadth;
	cout<<"area :";
	cout<<area <<endl;
	
	perimeter= 2*(length+breadth);
	cout<<"perimeter :";
	cout<<perimeter<<endl;
	
	if(area>perimeter){
		cout<<"area is greater"<<endl;
	}
	else{
		cout<<"area is smaller"<<endl; 
	}	
}