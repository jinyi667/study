/**
 *
 *Filename: cppcompiler.cpp
 *Created in 2023/01/20 14:09:14
 *Author: tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{

    // string filename = argv[1];
    try
    {
        char command[110];
        printf("%d files to be compiled...\n", argc - 1);

        for (int i = 1; i < argc; i++)
        {
            printf("compiling [%d] file...please wait\n", i);
            string filename = argv[i];

            size_t len = filename.size();
            string outputname = filename.substr(0, len - 4);
            sprintf(command, "g++ -std=c++14 %s -o %s", filename.c_str(), outputname.c_str());
            system(command);
            printf("[%d]/[%d] file finished.\n", i, argc - 1);
            
        }
        
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
