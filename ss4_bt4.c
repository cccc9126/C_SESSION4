

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("hay nhap mot thang bat ki : ");
    scanf("%d", &num);
    if (num == 1 || num==3 ||num ==5||num==7||num==8||num==10||num==12 ){
        printf("thang co 31 ngay");
    }else if (num == 4 || num==6 ||num ==9||num==11 ){
        printf("thang co 30 ngay");
    }else if (num ==2){
        printf("thang co 29 ngay");
    }
    return 0;
}
