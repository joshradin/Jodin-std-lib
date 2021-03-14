#ifndef __STDINT_HEADER__
#define __STDINT_HEADER__

in std {

	class Int {
		private int value;

		public Int(int value);

		public int getValue();

		public void setValue(int value);

		//virtual public std::String toString();

		public Int abs();

		public Int pow(int exp);
	};


	class Long {
		private long value;

		public Long(long value);

		public long getValue();

		public void setValue(long value);

		//virtual public std::String toString();

		public Long abs();

		public Long pow(int exp);
	};

	class BigInt {
			private boolean negative;
			private u8 digits[];
			private usize digit_count;

			public BigInt(isize base);
			public BigInt(usize base);

			public BigInt add(BigInt other);
			public BigInt subtract(BigInt other);
			public BigInt mult(BigInt other);
			public BigInt divide(BigInt other);
			public BigInt remainder(BigInt other);

	};

}

#endif
