#ifndef __STREAM__HEADER__
#define __STREAM__HEADER__

in std
class Stream {
	public virtual void close();
};

in std
class OutputStream : Stream {

	public virtual void write(char c);
	public virtual void write(std::String s);
	public virtual void write(std::Object o);
	public virtual void flush();

};

in std
class OutputWriter : OutputStream {

	public virtual void writeln();
	public virtual void writeln(char c);
	public virtual void writeln(std::String s);
	public virtual void writeln(std::Object o);


};

in std
class InputStream : Stream {
	public virtual u8 read();
	public virtual bool safe_read(u8* c);
	public virtual bool read(u8 buffer[], int len);
}

in std
class InputReader : InputStream {

	public virtual char readChar();
	public virtual std::String readString(int length);
	public virtual std::String readLine();
	public virtual std::String readToken();

}



#endif