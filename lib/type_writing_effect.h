#include <iostream>
using namespace std; 

void wait_1ms(int msec); 
void type_writing(char string[1000], int speed); 
int strlen(char string[]); 
void type_writing_hello(void); 

// int main(void) {
//     type_writing_hello();

//     return 0; 
// }

/** program to wait for msec ms before go to next statement
 * 
*/
void wait_1ms(int msec) {
    // in here: 1s = 500 000 000
    for (int j = 0; j <= msec - 1; j++) {
        int i = 0; 
        while (i < 643776) {
            i++; 
        }
    }
} 


/** program to find the length of inputed string
 * 
*/
int strlen(char string[]) {
    int result = 0; 
    while (string[result] != '\0') {
        result++; 
    }
    
    return result; 
}


/** program to create the type writing effect with inputed string and inputed speed
 * 
*/
void type_writing(char string[1000], int speed) {
    for (int i = 0; i <= strlen(string) - 1; i++) {
        cout << string[i]; 
        wait_1ms(speed);
    }
}


void type_writing_hello(void) {
    char a[] = "Hello guys! ";
    char b[] = "This is my first type-writing program";
    type_writing(a, 200); 
    wait_1ms(1000); 
    type_writing(b, 100);
}