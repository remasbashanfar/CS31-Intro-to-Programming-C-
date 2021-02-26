The purpose of this assignment is to have you start learning how to use the Visual C++ and either Xcode or g++ environments and understand a variety of programming errors.

Here's what you are to do:

(optional) Obtain a copy of Visual C++ and install it. You don't need to do this if you prefer to do your Visual C++ work on the SEASnet computers (in the lab or remotely). If you will be using another development environment (such as Xcode on a Mac), use this project to get comfortable using it as well as Visual C++.

Enter this C++ program into your development environment. Do not change the program.

Build the executable from the program. (Fix any typos you may have made when entering the program.)

Execute the program with a variety of reasonable input integers to see if it runs as one would expect from reading the source code. (If the Visual C++ console window disappears when your program finishes executing, before you have a chance to see the output, you probably forgot to do step 4 from the Visual C++ 2019 writeup, or you started execution by selecting the Start Debugging item from the Debug menu or by double-clicking on the .exe file. What you want to do is select the Start Without Debugging item from the Debug menu; if there is no such menu item, fix it as directed in step 7 of the writeup.)

Using the program as given, run it with input integers that cause it to produce incorrect, unusual, or nonsensical results. (Notice we're saying to try input integers, not input like 124765.23 or strawberry.)

Starting from the program as given, introduce into the source code at least one error that someone might make that, while not preventing a successful build, causes the program when it runs to produce incorrect results from reasonable input.

Again starting from the program as given, introduce at least two distinct types of mistakes that someone might make, each of which would cause the program to fail to compile correctly.

You should create a separate project for each of steps 2, 6, and 7, since you're not allowed to have multiple files in the same project if more than one has a main routine.

In addition to running the programs under Visual C++, run them using clang++ or g++ (perhaps using Xcode on a Mac or g++ with Linux).

What you will turn in for this assignment is a compressed file in zip format containing exactly four files:

A file named original.cpp that contains the program as given.

A file named logic_error.cpp with the program you produced in step 6.

A file named compile_error.cpp with the program you produced in step 7.

A file named report.doc or report.docx (in Microsoft Word format) or report.txt (an ordinary text file) that describes the input you provided in step 5 and each of the errors you introduced into the logic_error.cpp and compile_error.cpp programs. Briefly discuss any error messages the compiler reported, and incorrect, unusual, or nonsensical results. This report may well end up being much less than a page long.  Please be sure to include your name and your UCLA Id number in this document.

The zip file itself may be named whatever you like.

Do not include anything else in the zip file. (Some Windows users seem not to be aware of Windows filename extensions, so end up putting the wrong files in their zip file.) To create a zip file on a SEASnet machine, you can select the four files you want to turn in, right click, and select "Send To / Compressed (zipped) Folder". Under Mac OS X, copy the files into a new folder, select the folder in Finder, and select File / Compress "folderName"; make sure you copied the files into the folder instead of creating aliases to the files.

We will be using software tools to help us grade your projects, so there are certain requirements you must meet for the tools to work: The zip file you turn in for this project must have exactly four files in it, with exactly the names indicated. If you do not follow these requirements, your score on this project will be zero. "Do you mean that if I do everything right except misspell a file name or include an extra file, I'll get no points whatsoever?" Yes. That seems harsh, but attention to detail is an important skill in this field. A draconian grading policy certainly encourages you to develop this skill.  The only exception to the requirement that the zip file contain exactly four files of the indicated names is that if you create the zip file under Mac OS X, it is acceptable if it contains the additional files that the Mac OS X zip utility sometimes introduces: __MACOSX, .DS_Store, and names starting with ._ that contain your file names.  In an effort to assist CS 31 students with the contents of your .zip file archive, Howard has created a Zip File Checker which will echo back to you the contents of your .zip file.  Please use this file checker to ensure you have named all your files correctly.
