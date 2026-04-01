#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("This Triangle is NOT possible.\n");
    } else {
     
        if ((a*a + b*b == c*c) || 
            (a*a + c*c == b*b) || 
            (b*b + c*c == a*a)) {
            printf("Right-angle triangle\n");
        }
        else if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
      
        else if (a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        }
       
        else {
            printf("Scalene triangle\n");
        }
    }

    return 0;
}
