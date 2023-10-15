#include <iostream>
#include <getopt.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(int argc, char *argv[]) {
        
    int opt;
    double z,x,y;
    
    while ((opt = getopt (argc, argv, "c:t:h:m:n")) != -1){
        switch (opt) {
            case 'h':
                cout<<"КАЛЬКУЛЯТОР - "<< argv[0] << endl<< "Чтобы выбрать действие, нужно ввести один из параметров:" << endl<< "-c — нахождение тангенса (режим градусов)" << endl << "-t — нахождение тангенса (режим радиан)"<< endl << "-m — нахождение котангенса (режим градусов)"<<endl << "-n — нахождение котангенса (режим радиан)"<<endl << "Для того чтобы продолжить запустите программу еще раз с нужным параметром и введите значения через пробел"<< endl;
            break;
                
                
            case 'c':
                x = strtol(argv[2], NULL, 10);
                z=x*3.14159265/180.0;
                y = tan(z);
                
                printf("Тангенс (режим градусов) %f\n", y);
                
            break;
                
            case 't':
                x = strtol(argv[2], NULL, 10);
                y = tan(x);
                
                printf("Тангенс (режим радиан) %f\n", y);
                
            break;
            
            case 'm':
                x = strtol(argv[2], NULL, 10);
                z=x*3.14159265/180.0;
                y = 1/tan(z);
                
                printf("Котангенс (режим градусов) %f\n", y);
                
            break;
            
            case 'n':
                x = strtol(argv[2], NULL, 10);
               
                y = 1/tan(x);
                
                printf("Котангенс (режим радиан) %f\n", y);
                
            break;
            
        }
    }
}
