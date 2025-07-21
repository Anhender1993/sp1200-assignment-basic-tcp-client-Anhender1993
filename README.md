# Assignment: Basic TCP Client

## Introduction

In this assignment, you will develop a basic TCP client application in C that connects to a provided Docker server, sends messages, and handles responses. This assignment will help you understand socket programming, TCP connections, and basic client-server communication.

## Starter Files

Create a new file named `tcp_client.c`.

## Requirements

- **Create a TCP Client**: Implement a TCP client that connects to a server running inside a Docker container.  
- **Send Messages**: The client should be able to send a message to the server.  
- **Receive and Handle Responses**: The client should be able to receive responses from the server and print them.  
- **Error Handling**: Implement basic error handling to manage connection failures and data transmission issues.

## Steps to Complete the Assignment

**Step 1: Create a Socket**  
Implement the code to create a TCP socket using `socket()`.

**Step 2: Configure Server Address**  
Set up the server address structure with the server’s IP and port number.

**Step 3: Connect to the Server**  
Use `connect()` to establish a connection with the server.

**Step 4: Send a Message**  
Implement the functionality to send a message to the server using `send()`.

**Step 5: Receive and Print Response**  
Implement the code to receive a response from the server using `recv()` and print it.

**Step 6: Error Handling**  
Add error handling to manage socket creation failures, connection issues, and data transmission problems.

## Sample Input and Output

For the following input: # Assignment: Basic TCP Client

## Introduction

In this assignment, you will develop a basic TCP client application in C that connects to a provided Docker server, sends messages, and handles responses. This assignment will help you understand socket programming, TCP connections, and basic client-server communication.

## Starter Files

Create a new file named `tcp_client.c`.

## Requirements

- **Create a TCP Client**: Implement a TCP client that connects to a server running inside a Docker container.  
- **Send Messages**: The client should be able to send a message to the server.  
- **Receive and Handle Responses**: The client should be able to receive responses from the server and print them.  
- **Error Handling**: Implement basic error handling to manage connection failures and data transmission issues.

## Steps to Complete the Assignment

**Step 1: Create a Socket**  
Implement the code to create a TCP socket using `socket()`.

**Step 2: Configure Server Address**  
Set up the server address structure with the server’s IP and port number.

**Step 3: Connect to the Server**  
Use `connect()` to establish a connection with the server.

**Step 4: Send a Message**  
Implement the functionality to send a message to the server using `send()`.

**Step 5: Receive and Print Response**  
Implement the code to receive a response from the server using `recv()` and print it.

**Step 6: Error Handling**  
Add error handling to manage socket creation failures, connection issues, and data transmission problems.

## Sample Input and Output

For the following input: Hello, Server!

We should expect the following output: Message sent: Hello, Server!
Response from server: Hello, Client!

## Conclusion

In this assignment, you developed a basic TCP client application capable of connecting to a server, sending messages, and handling responses. This assignment demonstrates the fundamentals of socket programming and TCP communication, which are crucial for networked applications.

Make sure to test your client with the provided Docker server to ensure it functions correctly. If you encounter any issues, review your code for errors or consult documentation for further guidance.

**Note:** Ensure that the Docker server is running and listening on the specified IP and port before you execute your client program.
