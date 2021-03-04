/*

This file is meant to be the list of functions that a toolchain must implement in some way for Jodin to run and
work with the operating system


*/

#ifndef __TOOLCHAIN__HEADER__
#define __TOOLCHAIN__HEADER__

#include <toolchain/defines.h>


in std {
// Process Control

class Process {
	private status_t status;
	private String command;
	private String* args; // null terminated
	private String* env; // null terminated

	public Process(std::String command);
	public Process(std::String command, std::String args[]);
	public Process(std::String command, std::String args[], std::String env[]);

	public int fork();
	public int await();

	public void wait();
};

void exit(int code);

// File management

class File {

	virtual public bool exists();
	virtual public bool create();

	virtual public void flush();
	virtual public void close();
	virtual public char read();
	virtual public bool ready();
	virtual public void write(char c);
};

File access_file(std::String file, std::String options);
File access_fd(int fd, std::String options);

// Device management


// Information management

u64 time();


// Communication management
void print_cstr(char* str);

// Jodin stuff

int get_hashcode_for(std::Object o);


}

void breakpoint();

#endif