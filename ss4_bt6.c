
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2, num,tienDien;
    printf("hay nhap so dien o dau thang : ");
    scanf("%d", &num1);
    printf("hay nhap so dien o cuoi thang : ");
    scanf("%d", &num2);
    num = num2 - num1;
    if(0<= num && num < 50){
        tienDien = num*10000;
    }else if(50<=num && num<100){
        tienDien =49*10000+(num - 49)*15000;
    }else if(100<=num && num<150){
        tienDien =49*10000+(num - 49)*15000+(num-99)*20000;
    }else if(150<=num && num<200){
        tienDien =49*10000+(num - 49)*15000+(num-99)*20000+(num-149*25000);
    }else if(200<=num){
        tienDien =49*10000+(num - 49)*15000+(num-99)*20000+(num-149*25000)+(num-199)*30000;
    }
    printf("tien dien thang nay cua ban la %d\n", tienDien);
    return 0;
}
