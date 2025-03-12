#include<iostream>
using namespace std;
     int count;
  void Guessing_game(int number,int guessing_number);
int main(){
    int number,choice;
    string option;
    int guessing_number=50;
    cout<<"Welcome to the Number guessing game!"<<endl;
    cout<<"I have to choose a number between  1 to 100. Try to guess it!"<<endl;
   do{
    cout<<"1)Start to Play the Guessing Game"<<endl;
    cout<<"2)option to play or not"<<endl;
    cout<<"enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"1)Enter your guessing number: ";
        cin>>number;
        Guessing_game(number,guessing_number);
        cout<<"\n----------------------------------------"<<endl;
        break;
        case 2:
        cout<<"Do you want to play again?(yes/no)"<<endl;
        cout<<"Enter your option: "<<endl;
        cin>>option;
        if(option == "yes"){
           Guessing_game(number,guessing_number);
           cout<<"\n------------------------------------------"<<endl;
        }
        else{
            cout<<"Thanks for playing! Goodbye!"<<endl;
        }
        break;
    }
   }while(choice!=3);
   
return 0;
}