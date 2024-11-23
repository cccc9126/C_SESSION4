#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b, c, A,B,C;
    printf("hay nhap mot so bat ki ");
    scanf("%d", &a);
    printf("hay nhap mot so bat ki ");
    scanf("%d", &b);
    printf("hay nhap mot so bat ki ");
    scanf("%d", &c);
    if(a<b &&a<c){
        A=a;
        if(b<c){
            B=b;
            C=c;
        }else{
            B=c;
            C=b;
        }
    }else if(b<a &&b<c){
        B=b;
        if(a<c){
            B=a;
            C=c;
        }else{
            B=c;
            C=a;
        }
    }else if(c<a &&c<b){
        A=c;
        if(a<b){
            B=a;
            C=b;
        }else{
            B=b;
            C=a;
        }
        
    }
    printf("sap xep ba so theo thu tu tang dan la %d %d %d\n", A,B,C);
    return 0;
}
