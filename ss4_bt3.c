
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("hay nhap mot so bat ki : ");
    scanf("%d", &num);
    if(num % 3 == 0 && num %5 == 0){
        printf("so chia het cho 3 va chia het cho 5\n");
    }else if (num % 3 == 0){
        printf("so chia het cho 3\n");
    }else if(num % 5 == 0){
        printf("so chia het cho 5\n");
    }
    return 0;
}
