
#### C++ Zero to Hero
the goal is to learn C++ and make some simple projects before doing so cool stuffs
This is step one before master tensorflow & Keras






## find complier path

g++ -v -E -x c++ /dev/null
g++ -xc++ -E -v -

# run code

g++ filename.cpp -o program (name you want)    
 .\program.exe

# c_cpp_properties.json should look similar to this so stuff connects

    "configurations": [
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
                "C:/msys64/ucrt64/include/**",
                "C:/msys64/ucrt64/include/c++/**",
                "C:/msys64/ucrt64/lib/gcc/x86_64-w64-mingw32/**"
            ],
         
"windowsSdkVersion": "10.0.19041.0",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": ""windows-gcc-x64", 
            :configurationProvider": "ms-vscode.cmake-tools"


### windows-msvc-x64"is not looking  right complier errors since my using mysys64