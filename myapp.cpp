#include <iostream>
#include "lib/type_writing_effect.h"
#include "lib/argh.h"
using namespace std;

char a[] = "Hello Tung! ";
char b[] = "I am your faithful servant! \n";
char c[] = "My name is Rim! ";
char d[] = "(^_^)";

int main(int, char* argv[]) {
    argh::parser cmdl(argv);

    if (cmdl[{"-h", "--helloRim"}]) {
        type_writing(a, 200); 
        wait_1ms(1000);
        type_writing(b, 125);
        wait_1ms(1000);
        type_writing(c, 200);
        wait_1ms(400);
        type_writing(d, 0);
        wait_1ms(400); 
    }

    return 0; 
}