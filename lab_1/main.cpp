#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

void first_task ()
{
    printf("\nПервое задание:\n");
    string first_task[5] = {
        "Вася", "пошел", "гулять", " в лес", "за грибами"
    };

    string retreat;
    for (int i = 0; i < 5; i++) {
        retreat += string(first_task[i].length()/2, ' ');
        cout << retreat << first_task[i] << endl;
    };
    retreat = string(7, ' ');
    string letters_g = string("Ж");
    for (int i = 0; i < 6; i++) {
        if (i < 4)
        {
        retreat.pop_back();
        cout << retreat << letters_g << endl;
        letters_g += "ЖЖ";
        }
        else if (i == 4)
        {
        cout << "\tHH HH" << endl;
        }
        else
        {
        cout << "\tZZZZZ" << endl;
        }
    };
}


void second_task(){
    printf("\nВторое задание:\n");
    int first_number, second_number, third_number, fourth_number;
    int summ, multi;
    float average; 
    first_number = 1;
    second_number = 2;
    third_number = 3;
    fourth_number = 4;
    // scanf("%d%d%d%d", &first_number, &second_number, &third_number, &fourth_number);
    summ = first_number + second_number + third_number + fourth_number;
    average = float(summ) / 4;
    multi = first_number * second_number * third_number * fourth_number;
    printf("%d + %d + %d + %d = %d\n", first_number, second_number, third_number, fourth_number, summ);
    printf("%d * %d * %d * %d = %d\n", first_number, second_number, third_number, fourth_number, multi);
    printf("Average of: %d, %d, %d, %d is: %.2f \n\n", first_number, second_number, third_number, fourth_number, average);
}


void third_task(){
    printf("\nТретье задание:\n");
    double a_coeff, b_coeff, c_coeff, discriminant;
    printf("Введите коэффициенты квадратного уравнения:\n");
    a_coeff = 1;
    b_coeff = 2;
    c_coeff = 0;
    // scanf("%lf%lf%lf", &a_coeff, &b_coeff, &c_coeff);
    if (a_coeff == 0){
        printf("коеффициент а равен 0\n");
    }
    else
    {
        discriminant = b_coeff * b_coeff - 4 * a_coeff * c_coeff;
        if (discriminant > 0){
            double x1= (-b_coeff + sqrt(discriminant)) / (2 * a_coeff);
            double x2 = (-b_coeff - sqrt(discriminant)) / (2 * a_coeff);
            printf("Корни вещественные: x1=%lf, x2=%lf\n", x1, x2);
        }
        else if (discriminant == 0){
            double x = (-b_coeff / (2 * a_coeff));
            printf("Один корень: x=%lf\n", x);
        }
        else {
            double real = -b_coeff / (2 * a_coeff);
            double im = sqrt(-discriminant) / (2 * a_coeff);
            printf("Корни мнимые: x1=%lf+%lfi, x2=%lf-%lfi\n", real, im, real, im);
        }
    }
}


int max_of_array(int massive[], int len_of_massive){
    int max = 0;
    for(int i = 0; i < len_of_massive; i++)
    {
        if(massive[i] > max)
        {
            max = massive[i];
        };
    };
    return max;
}


void fourth_task(){
    printf("\nЧетвертое задание:\n");
    int first_numbers[5] = {77, 13, 43, 55, 56};
    int second_numbers[5] = {84, 75, 39, 33, 76};
    int third_numbers[5] = {63, 59, 81, 58, 13};
    int fourth_numbers[8] = {70, 47, 22, 26, 4, 33, 68, 63};
    int fifth_numbers[8] = {26, 90, 40, 19, 41, 18, 92, 46};
    int sixth_numbers[8] = {78, 21, 91, 2, 26, 62, 71, 4};

    int *arrays[6] = {first_numbers, second_numbers, third_numbers, fourth_numbers, fifth_numbers, sixth_numbers};
    int len_of_arrays = sizeof(arrays) / sizeof(arrays[0]);
    for(int i = 0; i < len_of_arrays; i++){
        int len_of_array;
        if (i<3){
            len_of_array = 5;
        }
        else
        {
            len_of_array = 8;
        }        
        int maximum = max_of_array(arrays[i], len_of_array);
        printf("Max of array#%d is %d\n", i+1, maximum);
    }

    int month_numbers[3] = {4, 7, 10};
    for(int i = 0; i < 3; i++){
        if (3 <= month_numbers[i] && month_numbers[i] <= 5){
            printf("Mесяц %d соответсвует: Весна\n", month_numbers[i]);
        }
        else if (6 <= month_numbers[i] && month_numbers[i] <= 8){
            printf("Mесяц %d соответсвует: Лето\n", month_numbers[i]);
        }
        else if (9 <= month_numbers[i] && month_numbers[i] <= 11){
           printf("Mесяц %d соответсвует: Осень\n", month_numbers[i]);
        }
        else
        {
            printf("Mесяц %d соответсвует: Зима\n", month_numbers[i]);

        }
    }    
}


int main(int argc, char* argv[])
{
    first_task();
    second_task();
    third_task();
    fourth_task();   
}