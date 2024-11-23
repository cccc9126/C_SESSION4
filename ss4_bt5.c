
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2, num3;
    printf("hay nhap so thu nhat ");
    scanf("%d", &num1);
    printf("hay nhap so thu hai ");
    scanf("%d", &num2);
    printf("hay nhap so thu ba ");
    scanf("%d", &num3);
    if (num3>num1 && num3<num2){
        printf("so thu ba nam trong khoang giua so mot va so hai\n");
    }else{
        printf("so thu ba khong nam trong khoang giua so mot va so hai\n");
    }
    return 0;
}
