#include <cstdlib>

int main(void){
    system("netsh wlan show profile name=CagNet_B212 key=clear");
    return 0;
}