#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

char retornaM();

int main(){
    for(int i = 0; i < 10; i++){
        cout << retornaM() << "\n";
    }
}

char retornaM(){
    return 'm';
}