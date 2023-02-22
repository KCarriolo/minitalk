<div align="center">
  <img src="https://user-images.githubusercontent.com/98427284/220715371-f7c22a01-7a44-43d4-9180-5dfecf0c0485.png" height="150" width="150"/>

</div>

<h1 align ="center">
  42 Cursus' Minitalk

</h1>
<p align="center">This project is about coding a small data exchange program using ✨UNIX signals✨.</p>

## Installation

```sh
$> git clone https://github.com/KCarriolo/minitalk.git && cd minitalk && make
```

`make` supports the following flags.
- `all` or simply `make` -> Compiles the client and server and gets the project ready to go!
- `make clean` -> Removes the executables and the object files.
- `make fclean` -> Removes the executables, object files from minitalk folder and libft folder.
- `make re` -> Run make fclean and recompiles everything.
- `make bonus`-> Compiles the client_bonus and server_bonus files to generate the bonus part of this project.

Obs: The warning generated during the compilation by the third parameter of the handler function is ok since his use is deprecated nowadays.

## Usage

```sh
./server
```
On another terminal:
```sh
./client <pid_printed_by_server> "<your_message>"
```
## Bonus Usage

Should be the same as the normal usage but the Server gives a feedback message as he receives a message from Client.
