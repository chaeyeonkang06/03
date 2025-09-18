//
//  main.c
//  3
//
//  Created by 강채연 on 9/18/25.
//

#include <stdio.h>

int main(void) {
    // insert code here...
    char c, d;
  
    printf("enter a character:");
    scanf("%c", &c);
    
    d = c + 1;
    printf("the next character of %c (%i) is %c (%i).\n",c,c,d,d);
    
    return 0;
}
