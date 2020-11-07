#include <iostream>
#include <stdio.h>


using namespace std;

void PrintBin(uint8_t Val) {
    int b;
        for(b = 7; b >= 0; b--)
    {
        if (Val & (1 << b)){
        putchar('1');
        }
        else{
        putchar('0');
        }
    }
}

void first_task (){
    int number = 1;
    bool left=true;
    for(int i=0; i < 15; i++){
        PrintBin(number);
        printf("\n");
        if (left){
            number <<= 1;
            if ((number >> 7) & 1u){
                left = false;
            }
        }else{
            number >>= 1;
            if ((number >> 0) & 1u){
                left = true;
            }
        }
    }
}

void second_task_part_one(int position=3, bool left=true, int number =1){    
    for(int i=0; i < 15; i++){
        if ((number >> 3) & 1u){
            PrintBin(number);
            }
        else{
            number |= (1 << position);  // set 1 in position 3
            PrintBin(number);
            number &= ~(1 << position);  // del 1 from position 3
            }        
        printf("\n");        
        if (left){
            number <<= 1;
            if ((number >> 7) & 1u){
                left = false;
            }
        }else{
            number >>= 1;
            if ((number >> 0) & 1u){
                left = true;
            }
        }
    }
}

void second_task_part_two(int position=0, bool left=true, int number =1){    
    for(int i=0; i < 20; i++){
        PrintBin(number);    
        printf("\n");        
        if (left){
            number <<= 1;
            number |= (1 << position);  // set 1 in position 0
            if ((number >> 7) & 1u){
                left = false;
            }
        }else{
            number &= ~(1 << position);  // del 1 from position 0
            number <<= 1;
            if (!((number >> 7) & 1u)){
                left = true;
            }
        }

    }
}

void second_task_part_three(int position=0, bool left=true, uint8_t number =1, int ending=7){    
    int *ending_positions = new int;
    int len_ending_position = 0;
    for(int i=0; i < 30; i++){
        if (len_ending_position == 7){
            PrintBin(255);
            printf("\n");     
            continue;
        }
        PrintBin(number);    
        printf("\n");        
        number <<= 1;
        if ((number >> ending) & 1u){
            number |= (1 << position);  // set 1 in position 0
            ending_positions[len_ending_position] = ending;
            ending -= 1;
            len_ending_position += 1;
            
        }
        for (int end_position=0; end_position < len_ending_position; end_position++){
            number |= (1 << ending_positions[end_position]);    // set 1 in ending_position
        }
    }
    delete ending_positions;
}
 


int main(){
    int task_numbers[3] = {5, 8, 9 };
    // first_task();
    // second_task_part_one();
    // second_task_part_two();
    second_task_part_three();
}
