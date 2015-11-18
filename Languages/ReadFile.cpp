//
//  ReadFile.cpp
//  Languages-lucas
//
//  Created by Lucas Karlsson on 18/11/15.
//  Copyright (c) 2015 Lucas Karlsson. All rights reserved.
//

#include "ReadFile.h"

ReadFile::ReadFile() { }

void ReadFile::readFile(std::string fileName) {
    file.open(fileName.c_str());
    
    if (!file) {
        std::cout << "Could not open file...\n";
        exit(1);
    }
    if (file.is_open()) {
        while (std::getline(file,line)) {
            std::cout << line << "\n";
        }
    }
    
}