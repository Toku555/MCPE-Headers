#pragma once
class StringTag{
	public:
		StringTag(std::string const&,std::string const&);
		void copy(void);
		void equals(Tag const&);
		void getId(void);
		void load(IDataInput *);
		void toString(void);
		void write(IDataOutput *);
		void ~StringTag();
		void ~StringTag();
};
