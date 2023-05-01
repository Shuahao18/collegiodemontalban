#include <iostream>
#include <string>

int main(){

std::string name, red, blue, grey, green;
char guessColor;

        std::cout<<"$$$$$$$$$$$$$$$COLOR==GAME$$$$$$$$$$$$$$$"<<'\n';
        std::cout<<'\n';
        std::cout<<"Enter your name: ";
        std::getline(std::cin, name);
        std::cout<<'\n';
        std::cout<<"$$$$$$$$$$$$$$$COLOR==GAME$$$$$$$$$$$$$$$"<<'\n';
        std::cout<<'\n';
        std::cout<<"SSSSS||EEEEE||LLLLLL||EEEEE||CCCCC||TTTTT"<<'\n';
        std::cout<<"r or R : RED"<<'\n';
        std::cout<<"b or B : BLUE"<<'\n';
        std::cout<<"y or Y : YELLOW"<<'\n';
        std::cout<<"g or G : GREEN"<<'\n';
        std::cout<<'\n';
        std::cout<<"Choose a color: ";
        std::cin>>guessColor;
        std::cout<<"SSSSS||EEEEE||LLLLLL||EEEEE||CCCCC||TTTTT"<<'\n';

        switch(guessColor)
        {
        case 'R': /*change color to Red*/
        case 'r': /*change color to red*/
            system("color 4f");
            std::cout<<'\n';
            std::cout<<"Congrats You Win "<<name<<"!"<<'\n';
            break;

        case 'B': /*change color to Blue*/
        case 'b': /*change color to blue*/
            system("color 1f");
            std::cout<<'\n';
            std::cout<<"Sorry You Lose "<<name<<"!"<<'\n';
            break;

        case 'Y': /*change color to Yellow*/
        case 'y': /*change color to yellow*/
            system("color 6f");
            std::cout<<'\n';
            std::cout<<"Congrats You win "<<name<<"!"<<'\n';\
            break;

        case 'G': /*change color to Green*/
        case 'g': /*change color to green*/
            system("color 2f");
            std::cout<<'\n';
            std::cout<<"Congrats You win "<<name<<"!"<<'\n';
            break;

        default:
            system("color 0a");
            std::cout<<'\n';
            std::cout<<"Invalid Color Try Again!"<<'\n';
            break;
        }

return 0;
}
