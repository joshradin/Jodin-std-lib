#ifndef __STDIO__HEADER__
#define __STDIO__HEADER__

#include <primitives.h>
#include <system/filesystem.h>
#include <stream.h>

typedef std::File FILE;
typedef u64 fpos_t;

#define NULL nullptr;
#define EOF -1;

#define stdin (new std::ContinuousReader(access_fd(0, new std::String("r"))))
#define stdout (new std::FileWriter(access_fd(1, new std::String("w")), true))
#define stderr (new std::FileWriter(access_fd(2, new std::String("w")), true))

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

/*
	public void writeln();
	public void write(char c);
	public void writeln(char c);

	public void write(std::String s);
	public void writeln(std::String s);

	public void write(std::Object o);
	public void writeln(std::Object o);

	public void flush();
	public void close();
*/

};

in std
class FileReader : InputReader {
	FILE f;

	public FileReader(FILE f);
/*
	public void close();
	public u8 read();

	public bool safe_read(u8* c);

	public bool read(u8 buffer[], int len);

	public char readChar();

	public String readString(int len);

	public String readLine();

	public String readToken();
*/
};

in std
class ContinuousReader : FileReader {

	public ContinuousReader(FILE f);
	virtual public char readChar();
};

#endif
