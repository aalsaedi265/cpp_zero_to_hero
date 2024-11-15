
## C++ Zero to Hero
the goal is to learn C++ and make some simple projects before doing so cool stuffs
This is step one before master tensorflow & Keras






### find complier path

g++ -v -E -x c++ /dev/null
g++ -xc++ -E -v -

## run code

g++ filename.cpp -o program (name you want)    
 .\program.exe

 or 
 g++ filename.cpp -o filename && ./filename

## c_cpp_properties.json should look similar to this so stuff connects

1. Press F1 (or Ctrl+Shift+P) to open the command palette
2. Type "C/C++: Edit Configurations" and select it
3. VS Code will automatically create the .vscode folder with c_cpp_properties.json

    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
### these are need to use all the tools, this is for my windows
                "C:/msys64/ucrt64/include",
                "C:/msys64/ucrt64/include/c++/**",
                "C:/msys64/ucrt64/lib/gcc/x86_64-w64-mingw32/**"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "windowsSdkVersion": "10.0.19041.0",
            "cStandard": "c17",
            "cppStandard": "c++17",
    ### i use gcc so i placed it over the defualt seeting
            "intelliSenseMode": "windows-gcc-x64",
            
    ### be sure to use your own complier or intell sense will lose its mind

            "compilerPath": "C:/msys64/ucrt64/bin/g++.exe"


            // "configurationProvider": "ms-vscode.cmake-tools" 


### windows-msvc-x64"is not looking  right complier errors since my using mysys64

#### extension project manager by dark emerald to automate for like in java