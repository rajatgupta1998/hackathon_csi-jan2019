# CSI Hackathon Jan 2019
This is a C++ based console application for the hackathon hosted by CSI at Chitkara University in Jan 2019. This is built by me (@rajatgupta1998), @adi199 and @ptiwari2701 .

Technologies used for this console applet:
C++ C CMake GNU make

# Introduction

This entire platform is supposedly governed by a virtual government. It is divided into 3 sectors:

1. Government
2. Corporate(s)
3. Startup(s)


A corporate gives a challenge statement to the budding developers' startups and they solve them. The stakeholders monitor the 
development activity and bid accordingly. The government governs the entire activity and can alter this entire database.
This applet is capable of checking the development cycle and we might later add a feature to enable bidding from the investors.

# How to use? 
#### **Using our prebuilt binaries:**

- ### Windows:
**Note: You must have the latest build of Windows 10. Windows 7/8.1 aren't directly supported but they should work fine.**
Download ```hack.exe``` from our binaries folder and place it in your working  directory. 
Open Command Prompt or Powershell in your system and navigat to the working folder.
Run the binary as: ```.\hack.exe```

- ### Linux:
Download the `hack` binary from the binaries folder and place it in your working folder. Open the terminal and run the binary in this way: ```./hack``` . If you get permission denied errors, run this: ```chmod +x hack```.

#### Building from source:
**You must have a 64 bit system**
Setup GCC 8.x (Latest MingW-64 release if building on Windows).
Compile ```database.cpp``` using gcc/mingW as
```g++ database.cpp -o database``` and then run it just like a prebuilt binary OR just use your favourite IDE for C/C++.

(optional) Install CLion from JetBrains and build & run the project.

# Feedback and Licensing
This is licensed under GPL v3. All feedback are welcome and you're free to create issues/pull requests on this repository.
