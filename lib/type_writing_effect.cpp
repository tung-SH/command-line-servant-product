// ERROR: hieu biet ve string con han che 

/** program to
 * 1. say hello to the user with type-writing 
 *      effect
 * 2. let user experience the new feature by 
 *  2.1 let user enter the text 
 *  2.2 let user enter the speed
 *  2.3 let user enter the delay at the end of text
 *  2.4 print the text with new feature
 * 
*/

#include <iostream>
using namespace std; 

void wait_1ms(int); 
int strlen(char str[]); 
void print_type_writing(char str[], int, int);


// int main(void) {
//     char a[] = "Hello User!\n";
//     print_type_writing(a, 1, 10); 

//     char b[1000]; 
//     int speed, delay; 
    
//     /* NOTE: how to enter sentence
//     */
    
//     cout << "Please enter the speed of the text: "; cin >> speed; 
//     cout << "Please enter the delay at the end of the text"; cin >> delay; 
//     cout << "Please enter the text: "; cin >> b; 

//     print_type_writing(b, speed, delay); 

//     return 0; 
// }

// program to wait msec milisecond until go to the next statement
void wait_1ms(int msec) {
    while (msec >= 1) {
        int count = 663157; // count for 1ms
        while (count >= 1) {
            count--; 
        }
        msec--; 
    }
}


// program to count the lenght of a string
int strlen(char str[]) {
    int result; 
    result = 0; 
    bool is_end_of_string = false; 
    while (!is_end_of_string) {
        is_end_of_string = (str[result] == '\0');
        result++; 
    }

    return result; 
}

/** program to print the text str with the speed * 100 (milisecond) 
 *      and delay * 100 (milisecond)
 * 
*/
void print_type_writing(char str[], int speed, int delay) {
    for (int i = 0; i <= strlen(str) - 1; i++) {
        cout << str[i]; wait_1ms(speed * 100); 
    }
    wait_1ms(delay * 100); 

}