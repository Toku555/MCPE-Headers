#pragma once
class Int64Tag{
	public:
		Int64Tag(std::string const&);
		Int64Tag(std::string const&,long long);
		void copy(void);
		void equals(Tag const&);
		void getId(void);
		void load(IDataInput &);
		void toString(void);
		void write(IDataOutput &);
		void ~Int64Tag();
		void ~Int64Tag();
};
