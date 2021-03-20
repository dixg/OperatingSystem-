# OperatingSystem-
CS 621 – Operating System Design
Programming Assignment #1

You are to use the UNIX environment to write two C programs as follows: 
1.Simulate the UNIX utility time that shows the time taken by a program. Your command line syntax should be as follows: (mytime command). This program should invoke a program which gets the CPU time, forks a child to run command and when the child returns gets the CPU time again and prints the difference between the two times. You do not need to re-invent the concept of time. You can use a built-in Unix/Linux timer utility to keep the time.

2.Use sigaction and pause to write a function that simulates the sleep function. DO NOT simply write a wrapper program to call the UNIX/Linux “sleep” function.
Both programs MUST be written in C on UNIX or Linux. You might need to create a Virtual Machine environment to program in since this program cannot be written on an MS Windows computer. It can be written in Terminal on a MacBook.
Note: DO NOT copy or use ANY source code found on the Internet or from other sources. Write the source code yourself, from scratch. Any code copied or modified from the Internet or other sources will NOT receive credit. DO NOT work together with other students. Any students turning in the same or modified versions of the same source code will NOT receive credit. This assignment can ONLY be submitted one time for credit.
