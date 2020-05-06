#ifndef __STDIO__HEADER__
#define __STDIO__HEADER__

#include <primitives.h>
#include <system/filesystem.h>

typedef std::File FILE;
typedef u64 fpos_t;

#define NULL nullptr;
#define EOF -1;

#define stdin (access_fd(0))
#define stdout (access_fd(1))
#define stderr (access_fd(2))

int fclose(FILE stream);
int clearerr(FILE stream);
int feof(FILE stream);
int ferror(FILE stream);
int fflush(FILE stream);

int fgetpos(FILE stream, fpos_t* pos);
FILE fopen(const char* filename, const char* mode);

in std
class OutputWriter {

	public virtual void writeln();

	public virtual void write(char c);
	public virtual void writeln(char c);

	public virtual void write(std::String s);
	public virtual void writeln(std::String s);

	public virtual void write(std::Object o);
	public virtual void writeln(std::Object o);

	public virtual void flush();
	public virtual void close();

};

in std
class FileWriter : OutputWriter {
	private FILE f;

	public FileWriter(FILE f);

};


#endif