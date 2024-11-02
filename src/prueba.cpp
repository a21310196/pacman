#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>
using namespace std;
using namespace ftxui;
int main(int argc, char const *argv[]) {
    std::string reset_position;
    int frame = 0;
    int tiempo = 0;
int posx =0;
int posy= 100;
int velbalon = 20;
int g= 3;
    while (true) {
        auto can = Canvas(500,500);
        posx= velbalon * tiempo;
        posy= (100- (velbalon*tiempo)+(0.5*g*(tiempo*tiempo))+frame);

        
        can.DrawBlockCircleFilled(posx,posy,5);
        can.DrawBlockCircleFilled(posx*0.8,posy*0.5,10);
        can.DrawBlockCircleFilled(posx*0.5,posy*0.2,15);
        can.DrawBlockCircleFilled(posx*1.1,posy*1.5,3);
        can.DrawBlockCircleFilled(150,100,25);
        
        if (frame > 10) frame = 0;
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::White, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);

        if (posx>350){
        posy =100;
        posx = 0;
        tiempo = 0;
    }
     frame++;
        tiempo ++;
    }
}