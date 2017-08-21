//
//  cReader.cpp
//  procedural-mesh-test
//
//  Created by Jacobo Tapia on 21/08/17.
//  Copyright © 2017 Jacobo Tapia. All rights reserved.
//

#include "cReader.h"

Reader::Reader(){}
Reader::~Reader(){}

void Reader::readFile(){
    
    string line;
    ifstream myfile ("/Users/jacobotapia/Desktop/ProceduralMesh.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            if(line.compare("") == 0){
                std::cout << "therefore, both are apples\n";
            }
        }
        myfile.close();
    }
    
}
