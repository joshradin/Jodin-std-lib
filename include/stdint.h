#ifndef __STDINT_HEADER__
#define __STDINT_HEADER__

in std {

	class Int {
		private int value;

		public Int(int value);

		public int getValue();

		public void setValue(int value);

		virtual public std::String toString();

		public Int abs();

		public Int pow(int exp);
	};


	class Long {
		private long value;

		public Long(long value);

		public long getValue();

		public void setValue(long value);

		virtual public std::String toString();

		public Long abs();

		public Long pow(int exp);
	};

}

#endif