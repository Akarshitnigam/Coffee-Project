#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    cout << "Hello, Welcome to the Coffee App" << endl;
    cout<<" This is not a game for you to play \n So, please be a sensible person while selecting options"<<endl;
    cout<<"Please create a new account"<<endl;
    cout<<"Choose a username: "<<endl;
    string user;
    getline(cin,user);
    cout<<"Choose a password: "<<endl;
    string pass;
    getline(cin,pass);

    cout<<"Please enter your information"<<endl;
    cout<<"Username: "<<endl;
    string username;
    getline(cin,username);
    cout<<"password"<<endl;
    string password;
    getline(cin,password);

    while(username!=user||password!=pass){
        cout<<"Wrong username or Password please try again"<<endl;
        cout<<"Username: "<<endl;
        getline(cin,username);
        cout<<"Password : "<<endl;
        getline(cin,password);

    }
    cout<<"Welcome to the Coffee app"<<endl;
    double balance = 60.00;
    cout<<"Would you like to add money to your balance?  "<<endl;
    string q1;
    getline(cin,q1);


    if(q1=="yes"){
        cout<<"Enter how much money you want to add: "<<endl;
        double add;
        cin>>add;
        cout<<"Your new balance is updated to"<<" "<<balance+add<<" Rupees \nPlease come back whenever you wanna have our world's best coffee "<<endl;

    }


    else if(q1!="yes"){

    cout<<"Alright!"<<endl;

    }








    cout<<"Would you like a coffee today ?"<<endl;

    string q2;
    getline(cin,q2);

    if(q2=="yes"){

        cout<<"Please select which coffee you want "<<endl;
        string coffeetype[]={"Black coffee","Cream Coffee","Sugarfree Coffee"};
        double coffeeprices[]={30.00,40.00,50.00};

        cout<<"1. "<<coffeetype[0]<<"--"<<coffeeprices[0]<<" Rupees"<<endl;
        cout<<"2. "<<coffeetype[1]<<"--"<<coffeeprices[1]<<" Rupees"<<endl;
        cout<<"3. "<<coffeetype[2]<<"--"<<coffeeprices[2]<<" Rupees"<<endl;


        cout<<"Your choice: "<<endl;
        int q3;
        cin>>q3;

        while(q3>3||q3<1){
            cout<<"This is not a valid input, please try again by logging in again: "<<endl;
            break;
        }
        if(q3==1){
            cout<<"You have ordered a "<<coffeetype[0]<<endl;
           cout<<"The total of your order is "<<coffeeprices[0]<<"Rupees"<<endl;
           cout<<"You have "<<balance-coffeeprices[0]<<" Rupees left on your balance"<<endl;

        }else if(q3==2){

            cout<<"You have ordered a "<<coffeetype[1]<<endl;
           cout<<"The total of your order is "<<coffeeprices[1]<<"Rupees"<<endl;
           cout<<"You have "<<balance-coffeeprices[1]<<" Rupees left on your balance"<<endl;

        }else if(q3==3){
            cout<<"You have ordered a "<<coffeetype[2]<<endl;
           cout<<"The total of your order is "<<coffeeprices[2]<<" Rupees"<<endl;
           cout<<"You have "<<balance-coffeeprices[2]<<" Rupees left on your balance"<<endl;

        }
    }else{

            cout<<"Alright! Have a good day "<<endl;
    }













return 0;
}
