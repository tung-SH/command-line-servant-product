#include "lib/argh.h"
#include "lib/type_writing_effect.cpp"
#include "lib/calculator.cpp"

using namespace std;


int main(int, char* argv[]) {
    argh::parser cmdl(argv);

    // 1. say hello to user and introduce itself
    if (cmdl[{"-h", "--helloRim"}]) {
        char a[] = "Hello User! \n"; 
        print_type_writing(a, 1, 3); 

        char b[] = "My name is RIM. "; 
        print_type_writing(b, 2, 2); 

        char c[] = "And I am your faithful servant! ";
        print_type_writing(c, 1, 4);

        cout << "(^_-)\n";  

        char d[] = "Type \"-s\" to know what I can do for you, Sir!";
        print_type_writing(d, 1, 4); 
    }

    // 2. Enumerate what can RIM do for user
    if (cmdl[{"-s", "--serve"}]) {
        char a[] = "What I can do for you? (_ _)!\n";
        char b[] = "1. Help me with the simple calculations"; 
        print_type_writing(a, 1, 4); 
        print_type_writing(b, 1, 4); 
    }

    // 3. Help user with simple calculation
    if (cmdl[{"--1"}]) {
        calculator(); 
    }



    return 0; 
}