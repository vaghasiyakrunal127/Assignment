#include <stdio.h>

int main(){
    int a;

    printf("FAHRENHEIT:");
    scanf ("%d",&a);
    
    printf("CELCIUS:%f",(a-32)*5.0/9);

    return 0;
}