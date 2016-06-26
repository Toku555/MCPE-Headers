#pragma once
class ListTag{
	public:
		ListTag(void);
		void add(Tag *);
		void copy(void);
		void deleteChildren(void);
		void equals(Tag const&);
		void getFloat(int);
		void getId(void);
		void load(IDataInput *);
		void print(std::string const&,PrintStream &);
		void toString(void);
		void write(IDataOutput *);
		void ~ListTag();
		void ~ListTag();
};
