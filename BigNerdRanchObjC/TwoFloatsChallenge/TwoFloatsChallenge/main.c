//
//  main.c
//  TwoFloatsChallenge
//
//  Created by Catherine Kelleher on 3/16/16.
//  Copyright © 2016 Katie Kelleher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Declare first float
    float one = 1.35;
    
    //Declare second float
    float two = 5.75;
    
    //Add the floats together & store
    float sum;
    
    sum = one + two;
    
    //Log to user
    printf("Your sum is %f \n.", sum);
    
    //End function & indicate success
    return 0;
}
