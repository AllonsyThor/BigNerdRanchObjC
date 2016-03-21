//
//  main.c
//  Coolness
//
//  Created by Catherine Kelleher on 3/18/16.
//  Copyright © 2016 Katie Kelleher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //while loops
    //while (i < 12){
        //printf("%d. Katie is Cool\n", i);
        //i++;
    //}

    //for loops & break
//    int i;
//    for (int i = 0; i < 12; i++) {
//        if (i)
//        printf("Checking i = %d\n", i);
//        if (i + 90 == i * i){
//            break;
//        }
//    }
//    
//    printf("the answer is %d.\n", i);
    
// continue
    //int i;
    //for (i = 0; i < 12; i++){
        //if (i % 3 == 0){
            //continue;
        //}
        //printf("Checking i = %d\n", i);
        //if (i + 90 == i * i) {
            //break;
        //}
    //}
    
    //do while loop
    
    int i = 0;
    do {
        printf("%d. Katie is cool\n");
        i++;
    } while (i < 13);
    
    //printf("The answer is %d.\n", i);
    return 0;
}
