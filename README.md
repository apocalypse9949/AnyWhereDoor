![Designer (2)](https://github.com/user-attachments/assets/d642bfd6-d75b-40b3-9757-a21e7f1b47f2)


Please remember that these are live and dangerous malware! Do NOT run them unless you are absolutely sure of what you are doing! They are to be used only for educational purposes only. !!!
I highly recommend reviewing these files on a dedicated Virtual Machine that has no Internet access. If you are not careful, you will infect yourself or others with dangerous malware!!!


## Installation

First clone the project into your system

https://github.com/apocalypse9949/AnyWhereDoor.git



Use this below command to run the Demon.cpp
```bash
  cd AnyWhereDoor

  g++ -o Demon Demon.cpp -lssh

  ./Demon
```
Install Demon libs  with ./install.sh
    
## Detailed Instructions
# Demon Worm

## Overview
This project demonstrates a network-based worm using SSH and SFTP functionalities provided by the `libssh` library. **Warning: This is for educational purposes only and should only be run in a virtual environment.**

## Prerequisites
- `libssh` library installed on your system.

## Installation

### 1. Install dependencies
For Debian-based systems:
```bash
sudo apt update
sudo apt install libssh-dev
```
##  Warning

### 5. **Git Repository**

You can then commit and push your project to GitHub or any other Git hosting platform. Here’s an example of how to do that:

```bash
git init
git add .
git commit -m "Initial commit of Demon worm project"
git branch -M main
git remote add origin https://github.com/apocalypse9949/AnyWhereDoor.git
git push -u origin main
```
