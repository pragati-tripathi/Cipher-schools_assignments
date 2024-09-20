#include<iostream>
#define clrscr() system("cls")
using namespace std;

class Hotel{
    public:
    char pname[100];
    int qty,rate;

    void getProduct();
    void displayProduct();
};

void Hotel::getProduct(){
    cout<<"\nEnter Product Name: ";
    cin>>pname;
    cout<<"Enter Product Price: ";
    cin>>rate;
    cout<<"Enter Qty: ";
    cin>>qty;
}

void Hotel::displayProduct(){

    cout<<pname<<"  "<<rate<<"  "<<qty<<"  "<<qty*rate<<"\n";
}

int main(){

    clrscr();
    int choice,total=0;

    Hotel h[5];

    do{
        cout<<"\n----------------Billing System----------------";
        cout<<"\n       1.Enter Product ";
        cout<<"\n       2.Display Product ";
        cout<<"\n       3.Exit ";
        cout<<"\n----------------------------------------------";
        cout<<"\nEnter your choice ";
        cin>>choice;


        switch(choice){
            case 1:
            {
                for(int i=0;i<5;i++){
                    h[i].getProduct();

                }
                break;
            }
            case 2:
            {
                clrscr();
                cout<<"\n--------------------------------------\n";
                cout<<"\nName     Rate     Qty       Amount\n";
                cout<<"\n--------------------------------------\n";
                for(int i=0;i<5;i++){
                    h[i].displayProduct();
                    total=total+(h[i].qty*h[i].rate);
                }

                cout<<"\n--------------------------------------\n";
                cout<<"\n       Total Amount:      "<<total;
                break;
            }
        }
    }while(choice!=3);

    return 0;
}
