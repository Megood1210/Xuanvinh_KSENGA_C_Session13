#include <stdio.h>
int ucln(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;  
        a = temp;
    }
    return a;
}

int main(){
    int a =20;
    int b =15;
    printf("Uoc chung lon nhat cua %d v� %d l�: %d \n", a, b, ucln(a, b));

    return 0;
}


