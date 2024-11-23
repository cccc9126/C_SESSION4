

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("hay nhap mot so bat ki : ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("day la so chan\n");
    }else if(num % 2 == 1){
        printf("day la so le\n");
    }
    
    return 0;
}
