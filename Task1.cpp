           //                     NUMBER GUESSING GAME

#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int random;    //random number generated will be stored here
    int guess;     //user guess will be stored here
   
   
    random=rand()%100+1;   //create a random number between 1 and 100
    cout<<"********* GUESS GAME STARTED ************"<<endl;
    while (true) {
        
        cout<<"Enter Number"<<endl;
        cin >> guess;
   
        if(guess<random){
        cout<<"Too Low !!"<<endl;
        cout<<"---------------------------------------------------"<<endl;
    }
    else if(guess>random){
        cout<<"Too High !!"<<endl;
        cout<<"---------------------------------------------------"<<endl;
    }
    else{
        cout<<" Congratulations! You have guessed correcr number !!"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        break;
    }
     }
    return 0;
}
