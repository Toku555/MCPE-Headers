#pragma once
class DoubleTag{
	public:
		DoubleTag(std::string const&);
		DoubleTag(std::string const&);
		DoubleTag(std::string const&,double);
		DoubleTag(std::string const&,double);
		void copy(void);
		void copy(void);
		void equals(Tag const&);
		void equals(Tag const&);
		void getId(void);
		void getId(void);
		void load(IDataInput &);
		void load(IDataInput &);
		void toString(void);
		void toString(void);
		void write(IDataOutput &);
		void write(IDataOutput &);
		void ~DoubleTag();
		void ~DoubleTag();
};