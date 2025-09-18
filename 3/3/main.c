//
//  main.c
//  3
//
//  Created by 강채연 on 9/18/25.
//

#include <stdio.h>

int main(void) {
    // insert code here...
    char c;
    int i;
    printf("input a number:");
    scanf("%c", &c);
    
    i=c-'0';
    printf("The input number is %i\n", i);
    return 0;
}
