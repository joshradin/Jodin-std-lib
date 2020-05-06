#ifndef __STDIO__HEADER__
#define __STDIO__HEADER__

#include <primitives.h>
#include <system/filesystem.h>
#include <stream.h>

typedef std::File FILE;
typedef u64 fpos_t;

#define NULL nullptr;
#define EOF -1;

#define stdin (new std::FileReader(access_fd(0)))
#define stdout (new std::FileWriter(access_fd(1), true))
#define stderr (new std::FileWriter(access_fd(2), true))

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
	private bool autoFlush;

	public FileWriter(FILE f);
	public FileWriter(FILE f, bool autoFlush);

};

in std
class FileReader : InputReader {
	private FILE f;

	public FileReader(FILE f);
};



#endif