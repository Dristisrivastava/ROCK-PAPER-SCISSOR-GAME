#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
//1->rock
//2->paper
//3->scissor
int main(){
    srand((unsigned int) time(NULL));
    string playerthrow;
    string compthrow;
    int random=0;
    bool draw;
    int c=1;
    int scorep=0;
    int scorec=0;
    cout<<"starting the game.."<<endl;
    while (c<=5)
    {
        cout<<"round "<<c<<endl;
          do
       {
           draw=false;
            cout<<"1)rock"<<endl;
            cout<<"2)paper"<<endl;
            cout<<"3)scissors"<<endl;
            cout<<"choose among these - ";
            cin>>playerthrow;
            random=(rand()%3)+1;  //from 1 to 3
            if (random==1)
            {
                compthrow="rock";
            }
            else if(random==2){
                compthrow="paper";
            }
            else{
                compthrow="scissor";
            }
            if (compthrow == "rock") {
            cout << "Computer choosed Rock" << endl;
            }
             else if(compthrow=="paper"){
              cout<<"computer choosed Paper"<<endl;
            }
             else{
              cout<<"computer choosed scissor"<<endl;
            }
            
            if(compthrow==playerthrow){
              draw=true;
              cout<<"Draw!! play again"<<endl;
              cout<<endl;
            }
            else if(playerthrow=="rock" && compthrow=="scissor"){
              cout<<"you get point"<<endl;
              scorep++;
            }
            else if(playerthrow=="rock" && compthrow=="paper"){
              cout<<"computer gets point"<<endl;
              scorec++;
            }
            else if(playerthrow=="paper" && compthrow=="rock"){
              cout<<"you get point"<<endl;
              scorep++;
            }
            else if(playerthrow=="paper"&& compthrow=="scissor"){
              cout<<"computer gets point"<<endl;
              scorec++;
            }
            else if(playerthrow=="scissor" && compthrow=="rock"){
              cout<<"computer gets point"<<endl;
              scorec++;
            }
            else if(playerthrow=="scissor" && compthrow=="paper"){
              cout<<"you get point"<<endl;
              scorep++;
            }
         } while (draw);
       c++;
       cout<<"score-> you "<<scorep<<" computer "<<scorec<<endl;
       cout<<endl;
       }

    if (scorec>scorep)
    {
        cout<<"computer wins!!"<<endl;
    }
    else{
        cout<<"you win!!"<<endl;
    }
    cout<<"thanku for playing :)"<<endl;
}