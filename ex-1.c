#include <stdio.h>

int main() 
{
    int dia, mes, ano, num_dia;
    
    scanf("%d %d %d", &dia, &mes, &ano);
    
    num_dia = dia;
    
    for (int i = 1; i < mes; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10) {
            num_dia += 31;
        }else if (i == 4 || i == 6 || i == 9 || i == 11 ) {
            num_dia += 30;
        }else {
            if (ano % 4 == 0) {
                num_dia += 29;
            } else {
                num_dia += 28;
            }
        }
    }
    
    
    printf("%d \n", num_dia);
    
    return 0;
}