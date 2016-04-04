#pragma once
class IntTag{
	public:
		IntTag(std::string const&);
		IntTag(std::string const&,int);
		void copy(void);
		void equals(Tag const&);
		void getId(void);
		void load(IDataInput &);
		void toString(void);
		void write(IDataOutput &);
		void ~IntTag();
		void ~IntTag();
};
