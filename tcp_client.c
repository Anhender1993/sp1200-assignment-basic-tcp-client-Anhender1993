#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define SERVER_PORT 12345         // Change this if you're using a different port
#define SERVER_IP "127.0.0.1"     // Change this if the container is using another IP
#define BUFFER_SIZE 1024

int main() {
    int sockfd;
    struct sockaddr_in server_addr;
    char message[BUFFER_SIZE];
    char response[BUFFER_SIZE];
    ssize_t sent_bytes, received_bytes;

    // Step 1: Create socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Step 2: Configure server address
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    if (inet_pton(AF_INET, SERVER_IP, &server_addr.sin_addr) <= 0) {
        perror("Invalid address or address not supported");
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    // Step 3: Connect to the server
    if (connect(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Connection failed");
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    // Prompt user input
    printf("Enter message to send: ");
    if (fgets(message, sizeof(message), stdin) == NULL) {
        fprintf(stderr, "Error reading input\n");
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    // Remove newline character from message
    message[strcspn(message, "\n")] = 0;

