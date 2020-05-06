#ifndef __STREAM__HEADER__
#define __STREAM__HEADER__

in std
class Stream {
	virtual public void close();
};

in std
class OutputStream : Stream {

	virtual public void write(char c);
	virtual public void write(char* c);
	virtual public void write(std::String s);
	virtual public void write(std::Object o);
	virtual public void flush();

};

in std
class OutputWriter : OutputStream {

	virtual public void writeln();
	virtual public void writeln(char c);
	virtual public void writeln(char* c);
	virtual public void writeln(std::String s);
	virtual public void writeln(std::Object o);


};

in std
class InputStream : Stream {
	virtual public u8 read();
	virtual public bool safe_read(u8* c);
	virtual public bool read(u8 buffer[], int len);
};

in std
class InputReader : InputStream {

	virtual public char readChar();
	virtual public std::String readString(int length);
	virtual public std::String readLine();
	virtual public std::String readToken();

};



#endif