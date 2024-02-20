#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int year;
    std::cin>>year;
    int salary;
    std::cin>>salary;
     if(year>5)
     {
            std::cout<<"sal is"<<salary+salary*0.05<<endl;
     }
     else{
        std::cout<<"sal is"<<salary<<endl;
     }
    return 0;
}
    // {
    //         "name": "C/C++: gcc.exe build and debug active file",
    //         "type": "cppdbg",
    //         "request": "launch",
    //         "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
    //         "args": [],
    //         "stopAtEntry": false,
    //         "cwd": "${fileDirname}",
    //         "environment": [],
    //         "externalConsole": false,
    //         "MIMode": "gdb",
    //         "miDebuggerPath": "C:\\MinGW\\bin\\gdb.exe",
    //         "setupCommands": [
    //             {
    //                 "description": "Enable pretty-printing for gdb",
    //                 "text": "-enable-pretty-printing",
    //                 "ignoreFailures": true
    //             },
    //             {
    //                 "description": "Set Disassembly Flavor to Intel",
    //                 "text": "-gdb-set disassembly-flavor intel",
    //                 "ignoreFailures": true
    //             }
    //         ],
    //         "preLaunchTask": "C/C++: gcc.exe build active file"
    //     },

    //  {
    //         "name": "C/C++: g++.exe build and debug active file",
    //         "type": "cppdbg",
    //         "request": "launch",
    //         "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
    //         "args": [],
    //         "stopAtEntry": false,
    //         "cwd": "${fileDirname}",
    //         "environment": [],
    //         "externalConsole": false,
    //         "MIMode": "gdb",
    //         "miDebuggerPath": "C:\\MinGW\\bin\\gdb.exe",
    //         "setupCommands": [
    //             {
    //                 "description": "Enable pretty-printing for gdb",
    //                 "text": "-enable-pretty-printing",
    //                 "ignoreFailures": true
    //             },
    //             {
    //                 "description": "Set Disassembly Flavor to Intel",
    //                 "text": "-gdb-set disassembly-flavor intel",
    //                 "ignoreFailures": true
    //             }
    //         ],
    //         "preLaunchTask": "C/C++: g++.exe build active file"
    //     },