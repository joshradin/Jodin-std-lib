#ifndef __RESULT__HEADER__
#define __RESULT__HEADER__

using std;

for <T, E> class Result {
	private union {
		T ok
		E err;
	} value;
	private bool isOk;
	
	public Result(T ok);
	public Result(E err);
	
	/// if this is ok, T* ptr value is defined
	public bool matchOk(T* ptr);
	
	/// if this is ok, E* ptr value is defined
	public bool matchErr(E* ptr);
	
	/// if this is ok, T* ok value is defined and returns true,
	/// else E* err is defined
	///
	/// #Example
	/// T ok;
	/// E err;
	///
	/// if (match(&ok, &err)) {
	///		/* ok is defined */
	/// } else {
	///		/* err is defined */
	/// }
	public bool match(T* ok, E* err);
}





#endif