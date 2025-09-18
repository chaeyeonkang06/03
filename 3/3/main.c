//
//  main.c
//  3
//
//  Created by 강채연 on 9/18/25.
//

#include <stdio.h>

int main(void) {
    // insert code here...
    int ja, mo;
    
    printf("enter bunja:");
    scanf("%d", &ja);
    
    printf("enter bunmo:");
    scanf("%d", &mo);
    
    printf("the result (%i,%i) is %f\n", ja, mo, (float)ja/mo);
}
