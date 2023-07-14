@echo off
echo "Started build process..."
gcc -std=c++17 -Wall -Werror -pedantic -O3 -lstdc++ -o bt1 Src/Main.cpp
echo "Build end."