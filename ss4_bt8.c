
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b ,c;
    printf("hay nhap canh thu nhat cua tam giac ");
    scanf("%d", &a);
    printf("hay nhap canh thu hai cua tam giac ");
    scanf("%d", &b);
    printf("hay nhap canh thu ba cua tam giac ");
    scanf("%d", &c);
    if(a + b == c|| b+c==a ||a+c==b){
        printf("ba canh nay khong phai la tam giac");
    }else{
        printf("ba canh nay la mot tam giac");
    }
    return 0;
}
