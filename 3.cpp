#include<iostream>
using namespace std;
int main(){
	char ch='1';
	if(isalpha(ch)){
		if(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == '	E' ||ch == 'O' ||ch == 'U'){
		cout<<ch<<" is a vowel of ascii value is "<<int (ch)<<endl;	
		}
		else{
			cout<<ch<<" is a consonant of ascii value is "<<int(ch)<<endl;
		}
	}
	else{
	cout<<ch <<" is not an alphabet "<<endl;
}
}