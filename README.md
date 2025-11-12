# Basic TCP Client in C

> A lightweight TCP client written in C that connects to a Docker-hosted server, sends messages, and receives responses.  
> This project demonstrates the fundamentals of socket programming and reliable two-way communication over TCP.

## Project Description

This project implements a simple TCP client that establishes a connection to a server running inside a Docker container.  
The client allows the user to type a message, send it to the server, and then display the server’s response.  

It was developed as part of my Systems Programming coursework to gain practical experience with:
- Socket creation and management (`socket()`, `connect()`, `send()`, `recv()`)
- IP addressing and `sockaddr_in` structures
- Basic error handling and graceful termination

## Tech Stack
- **Language:** C (GCC 13+)
- **Environment:** Linux / VS Code Dev Container
- **Libraries:**  
  - `<stdio.h>` — input/output  
  - `<string.h>` — buffer operations  
  - `<sys/socket.h>` — core socket functions  
  - `<arpa/inet.h>` — IP address conversion  
  - `<unistd.h>` — socket cleanup


## File Structure
.devcontainer  |  # Dev container configuration for VS Code
.github        |  # GitHub automation/workflow files
tcp_client.c   |  # Main client implementation
README.md      |  # Project documentation

## Setup & Compilation

### Prerequisites
- VS Code with the **Dev Containers** extension  
- Docker installed and running  
- GCC or Clang compiler available inside the container  
- A TCP server (Docker-based or standalone) listening on the chosen port  

### Build
```bash
gcc tcp_client.c -o tcp_client
```
### Run
```bash
./tcp_client
```
You can then type a message (e.g., “Hello, Server!”) and receive the server’s reply.

### Program Workflow
	1.	Create a socket using socket(AF_INET, SOCK_STREAM, 0).
	2.	Define the server address and port with sockaddr_in.
	3.	Connect to the server using connect().
	4.	Send data via send().
	5.	Receive and print the server’s response via recv().
	6.	Close the socket with close() after communication completes.


### Example Output

Input:
```bash
Hello, Server!
```
Output:
```bash
Message sent: Hello, Server!
Response from server: Hello, Client!
```

### Error Handling

The client validates every step of the connection process:
	•	Socket creation failure
	•	Invalid IP or port configuration
	•	Failed connection attempts
	•	Transmission and reception errors

Each error prints a descriptive message to the terminal for easier debugging.

### Lessons Learned
	•	Gained experience with socket programming fundamentals.
	•	Understood TCP’s reliable communication model.
	•	Learned to test and debug networking code inside containerized environments.
	•	Improved confidence in managing low-level I/O operations in C.

### Author

Andrew Henderson
	•	GitHub: Anhender1993￼
	•	Portfolio: GitHub.com/Anhender1993
	•	LinkedIn: linkedin.com/in/andrew-v-henderson
