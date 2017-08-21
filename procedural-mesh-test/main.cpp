//
//  main.cpp
//  procedural-mesh-test
//
//  Created by Jacobo Tapia on 21/08/17.
//  Copyright © 2017 Jacobo Tapia. All rights reserved.
//



#ifdef __APPLE__
    #include <OpenGL/gl.h>
    #include <OpenGL/glu.h>
    #include <GLUT/glut.h>
    #include <time.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
#else
    #include "freeglut.h"
    #include <time.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
#endif

#include "cReader.h"

#include <iostream>

Reader* r;

int main(int argc, const char * argv[]) {
    
    r = new Reader();
    r->readFile();
    
}
