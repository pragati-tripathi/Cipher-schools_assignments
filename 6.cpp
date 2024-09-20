//write a program take a score from 0-100 a input print corresponding grade.
#include<iostream>
using namespace std;
int main(){
	int score;
	cout<<"enter score: ";
	cin>>score;
	
	if(score>90){
		cout<<"Grade A"<<"it means you scored above 90"<<endl;
	}
	else if(score>80){
		cout<<"grade B"<<"it means you scored above 80"<<endl;
	}
	else if(score>70){
		cout<<"grade C"<<"it means you scored above 70"<<endl;
	}
	else if(score>60){
		cout<<"grade D"<<"it means you scored above 60"<<endl;
	}
	else{
		cout<<"grade E"<<"it means you scored less then 60"<<endl;
	}
}
	