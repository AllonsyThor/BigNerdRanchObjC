//
//  main.c
//  ClassCertificates
//
//  Created by Catherine Kelleher on 3/16/16.
//  Copyright © 2016 Katie Kelleher. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void congradulateStudent(char *student, char *course, int numDays){
    printf("%s has done as much %s Programming as I coul dfit into %d days. \n", student, course, numDays);
}


int main(int argc, const char * argv[]) {
    congradulateStudent("Mark", "Cocoa", 5);
    //sleep(2);
    congradulateStudent("Bo", "Objective-C", 2);
    //sleep(2);
    congradulateStudent("Mike", "Python", 5);
    //sleep(2);
    congradulateStudent("Ted", "iOS", 5);
    
    return 0;
}
