#pragma once
class EndTag{
	public:
		void copy(void);
		void equals(Tag const&);
		void getId(void);
		void load(IDataInput &);
		void toString(void);
		void write(IDataOutput &);
		void ~EndTag();
		void ~EndTag();
};
