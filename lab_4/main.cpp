#include <iostream>
#include <stdio.h>
#include <stdint.h>


using namespace std;

void PrintBin(uint16_t Val) {
    int b;
        for(b = 15; b >= 0; b--)
    {
        if (Val & (1 << b)){
        putchar('1');
        }
        else{
        putchar('0');
        }
    }
}


int input(){
    char symbol;
    printf("Введите номер бита");
    scanf("%c", &symbol);
    if (symbol == 'A'){
        return 11;
    }else if (symbol == 'B'){
        return 12;
    }else if (symbol == 'C'){
        return 13;
    }else if (symbol == 'D'){
        return 14;
    }else if (symbol == 'E'){
        return 15;
    }else {
        int number = (int)symbol - 48;
        return number;
    }
}

void first_task (int a, int position=0, bool reset=false, bool add=false, bool inverting=false, 
                    bool multiply=false, bool division=false, bool shifting=false){
    int new_a = a;
    printf("\tДо\nДесятичное число: %d\nДвоичное число: ", a);
    PrintBin(a);
    printf("\n");
    if (reset){
        printf("\tПосле сброса бита#%d\n", position);
        // position = input();
        new_a &= ~(1 << position); 
    }
    else if (add){
        printf("\tПосле установки бита#%d\n", position);
        // position = input();
        new_a |= (1 << position);
    }
    else if (inverting){
        printf("\tПосле инвертирования бита#%d\n", position);
        // position = input();
        new_a ^= (1 << position);
    }
    else if (multiply){
        printf("\tУножения на %d\n", position);
        // position = input();
        new_a *= position;
    }
    else if (division){
        printf("\tделения на %d\n", position);
        // position = input();
        new_a /= position;
    }
    else if (shifting){
        printf("\tВведите направление сдвига вправо:'<' или влево:'>'\n");
        char symbol;
        // scanf("%c", &symbol);
        symbol = '<';
        if (symbol == '<'){
            printf("\tСдвигаем вправо на %d\n", position);
            // position = input();
            new_a <<= position;
        }
        else{
            printf("\tСдвигаем влево на %d\n", position);
            // position = input();
            new_a >>= position;
        }
    }
    printf("Десятичное число: %d\nДвоичное число: ", new_a);
    PrintBin(new_a);
    printf("\n");
}
 

int main(){
    int a = 39846, A = 2, B = 14, C = 3, D = 13, E = 4 , F = 0;
    printf("1.");
    first_task(a, A, true);
    printf("2.");
    first_task(a, B, false, true);
    printf("3.");
    first_task(a, C, false, false, true);
    printf("4.");
    first_task(a, D, false, false, false, true);
    printf("5.");
    first_task(a, E, false, false, false, false, true);
    printf("6.");
    first_task(a, F, false, false, false, false, false, true);
}
