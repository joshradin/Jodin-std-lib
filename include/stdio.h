#ifndef __STDIO__HEADER__
#define __STDIO__HEADER__

#include <primitives.h>
#include <system/filesystem.h>
#include <stream.h>

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
class FileWriter : OutputWriter {
	private FILE f;

	public FileWriter(FILE f);

};

in std
class FileReader : InputReader {
	private FILE f;

	public FileReader(FILE f);
}



#endif