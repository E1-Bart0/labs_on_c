#include <iostream>
#include <stdio.h>


using namespace std;

void PrintBin(unsigned char Val) {
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

void PrintBin_signed(signed char Val) {
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



void first_task (int a, int position=0, bool reset=false, bool add=false, bool inverting=false, 
                    bool plus=false, bool minus=false, bool shifting=false, bool add_or_minus=false){
    int new_a = a;
    printf("\tДо\nДесятичное число: %d\nДвоичное число: ", a);
    PrintBin(a);
    printf("\n");
    if (reset){
        printf("\tПосле сброса бита#%d\n", position);
        new_a &= ~(1 << position); 
    }
    else if (add){
        printf("\tПосле установки бита#%d\n", position);
        new_a |= (1 << position);
    }
    else if (inverting){
        printf("\tПосле инвертирования бита#%d\n", position);
        new_a ^= (1 << position);
    }
    else if (plus){
        printf("\tПрибавляем %d\n", position);
        new_a += position;
    }
    else if (minus){
        printf("\tОтнимаем %d\n", position);
        new_a -= position;
    }
    else if (shifting){
        printf("\tВведите направление сдвига вправо:'<' или влево:'>'\n");
        char symbol;
        // scanf("%c", &symbol);
        symbol = '<';
        if (symbol == '<'){
            printf("\tСдвигаем вправо на %d\n", position);
            new_a <<= position;
        }
        else{
            printf("\tСдвигаем влево на %d\n", position);
            new_a >>= position;
        }
    }
    else if (add_or_minus){
        printf("\tВведите для увеличения:'+' или для уменьшения:'-' на единицу\n");
        char symbol;
        // scanf("%c", &symbol);
        symbol = '+';
        if (symbol == '+'){
            printf("\tУвеличиваем на 1\n");
            new_a += 1;
        }
        else{
            printf("\tуменьшаем на 1\n");
            new_a -= 1;
        }
    }
    printf("Десятичное число: %d\nДвоичное число: ", new_a);
    PrintBin(new_a);
    printf("\n");
}
 

void first_task_signed (signed a, int position=0, bool plus=false, bool add_or_minus=false){
    string name;
    signed new_a = a;
    printf("\tДо\nДесятичное число: %d\nДвоичное знаковое число: ", a);
    PrintBin_signed(a);
    printf("\n");
    if (plus){
        printf("\tПрибавляем %d\n", position);
        new_a += position;
    }else if (add_or_minus){
        printf("\tВведите для увеличения:'+' или для уменьшения:'-' на единицу\n");
        char symbol;
        // scanf("%c", &symbol);
        symbol = '+';
        if (symbol == '+'){
            printf("\tУвеличиваем на 1\n");
            new_a += 1;
        }
        else{
            printf("\tуменьшаем на 1\n");
            new_a -= 1;
        }
    }
    printf("Десятичное число: %d\nДвоичное знаковое число: ", new_a);
    PrintBin_signed(new_a);
    printf("\n");
}
 

int main(){
    int a = 199, A = 6, B = 3, C = 7, D = 6, E = 6 , F = 0, G = 0;
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
    printf("7.");
    first_task(a, 1, false, false, false, false, false, false, true);
    printf("8.");
    first_task_signed(a, G, true);
    printf("9.");
    first_task_signed(a, 1, false, true);
}



