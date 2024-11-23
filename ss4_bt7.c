#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year;
    printf("hay nhap mot nam bat ki de kiem tra : ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100!=0){
        printf("la nam nhuan");
    }else if(year %100 ==0){
        if (year % 400 == 0){
            
            printf("la nam nhuan");
        }else if(year%400!=0){
            printf("khong la nam nhuan");
        }
            
    }else{
        printf("khogn la nam nhuan");
    }
    return 0;
}
