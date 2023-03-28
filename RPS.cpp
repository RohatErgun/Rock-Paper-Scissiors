#include<iostream>
#include<stdlib.h>
#include<time.h>

const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

char computer_turn();
char get_user_move();
void option(char);
void set_winner(char,char);

int main(void)
{
    system("clear");

    char user,comp;

    user = get_user_move();
    std::cout << "\nYout choice is: " << std::endl;
    option(user);

    comp = computer_turn();
    std::cout << "\nComputers move is: " << std::endl;
    option(comp);

    std::cout << " \n";
    set_winner(user,comp);

    std::cin.get();
}

char computer_turn()
{
    srand(time(NULL));
  int num = (rand()%3)+1;

    if(num==1){return 'r';}
    if(num==2){return 'p';}
    if(num==3){return 's';}
}

char get_user_move()
{
  std::cout << "\tRock Paper Scissors Gam!\t" <<std::endl;
  std::cout << "\nChoose Your Move : (r).Rock || (p).Paper || (s).Scissor"<<std::endl;
  std::cout <<"\nPlayer choice: ";char choice; std::cin>>choice;
      while(choice != 'r' && choice !='p' && choice !='s')
      {
        std::cout << "\nPlease select between (r).Rock || (p).Paper || (s).Scissor " << std::endl;
         std::cout <<"\nPlayer choice: ";std::cin>>choice;
      }
      return choice;
}
void option(char option)
{
  if(option == 'r'){std::cout <<"ROCK"<<std::endl;}
  if(option == 'p'){std::cout <<"PAPER"<<std::endl;}
  if(option == 's'){std::cout <<"SCISSOR"<<std::endl;}
}

void set_winner(char user,char comp)
{
    using namespace std;
    if (user == ROCK && comp == PAPER) {
        cout << "Computer Wins! Paper wraps Rock."<< endl;
    }
    else if (user == PAPER && comp == SCISSORS) {
        cout << "Computer Wins! Scissors cut Paper."<< endl;
        
    }
    else if (user == SCISSORS && comp == ROCK) {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (user == ROCK && comp == SCISSORS) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (user == PAPER && comp == ROCK) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (user== SCISSORS && comp == PAPER) {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "Tie. Play again win the Game." << endl;
    }
}


