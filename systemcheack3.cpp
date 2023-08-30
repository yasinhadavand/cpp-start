#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main(void){

        cout<<"Hello !!!"<<endl<<"How can i help you?"<<endl<<"For IPCHECK press (I)."<<endl<<"For WI-FI PASSWORD press (P)."<<endl;

        while (true) {


        if (_kbhit()) {
            char ch = _getch();
            if (ch == 'i' || ch == 'I') {
               system("C:\\Windows\\System32\\ipconfig");
               return 0;
            }
            if (ch == 'p' || ch == 'P')
            {
                system("netsh wlan show profile name=CagNet_B212 key=clear");
                return 0;
            }
            
            
        }
    }

    return 0;

}