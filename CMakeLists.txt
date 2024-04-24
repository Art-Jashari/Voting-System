cmake_minimum_required(VERSION 3.27)
project(Voting_System C)

set(CMAKE_C_STANDARD 11)

add_executable(Voting_System src/main.c
        include/election.h)
