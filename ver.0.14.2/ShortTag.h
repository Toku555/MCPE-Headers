#pragma once
class ShortTag{
	public:
		ShortTag(std::string const&);
		ShortTag(std::string const&,short);
		void copy(void);
		void equals(Tag const&);
		void getId(void);
		void load(IDataInput &);
		void toString(void);
		void write(IDataOutput &);
		void ~ShortTag();
		void ~ShortTag();
};
