//
//  main.c
//  3
//
//  Created by 강채연 on 9/18/25.
//

#include <stdio.h>

int main(void) {
    // insert code here...
    int input_int;
    float input_float;
    
    printf("enter an integer:");
    scanf("%d", &input_int);
    
    printf("enter an float:");
    scanf("%f", &input_float);
    
    printf("integer:%d, float:%f\n", input_int, input_float);
    
    return 0;
}
