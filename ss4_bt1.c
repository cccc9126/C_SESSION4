
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("hay nhap mot so bat ki : ");
    scanf("%d", &num);
    if (num >=0){
        printf("day la so duong\n");
    }else{
        printf("day la so am\n");
    }
    return 0;
}

