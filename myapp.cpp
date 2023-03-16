#include <iostream>
#include "lib/argh.h"
#include "lib/collatz_number.h"

using namespace std;


char a[] = "Hello Tung! ";
char b[] = "I am your faithful servant! \n";
char c[] = "My name is Rim! ";
char d[] = "(^_^)";

char e[] = "Hello Tung! ";
char f[] = "What can I do for you? (_ _)\n"; 
char g[] = "1 - Show the process of a collatz number\n";
char h[] = "2 - Show the first type writing program\n"; 



int main(int, char* argv[]) {
    argh::parser cmdl(argv);

    // 1. say hello to user
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

    // 2. what can i do for you? 
    if (cmdl[{"-s", "--serve"}]) {
        type_writing(e, 100); 
        wait_1ms(100);
        type_writing(f, 100); 
        wait_1ms(100);
        type_writing(g, 100); 
        wait_1ms(100);
        type_writing(h, 100); 
        wait_1ms(100);
    }
    

    if (cmdl[{"--1"}]) {
        collatz_num_io();
    }

    if (cmdl[{"--2"}]) {
        type_writing_hello();
    }

    return 0; 
}