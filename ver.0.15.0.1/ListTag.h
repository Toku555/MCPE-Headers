#pragma once
class ListTag{
	public:
		ListTag(std::string const&);
		ListTag(std::string const&);
		ListTag(void);
		ListTag(void);
		ListTag(void);
		void add(std::unique_ptr<Tag,std::default_delete<Tag>>);
		void add(std::unique_ptr<Tag,std::default_delete<Tag>>);
		void copy(void);
		void copy(void);
		void deleteChildren(void);
		void deleteChildren(void);
		void equals(Tag const&);
		void equals(Tag const&);
		void get(int);
		void get(int);
		void getCompound(uint);
		void getCompound(uint);
		void getFloat(int);
		void getFloat(int);
		void getId(void);
		void getId(void);
		void getInt(int);
		void getInt(int);
		void load(IDataInput &);
		void load(IDataInput &);
		void print(std::string const&,PrintStream &);
		void print(std::string const&,PrintStream &);
		void size(void);
		void size(void);
		void toString(void);
		void toString(void);
		void write(IDataOutput &);
		void write(IDataOutput &);
		void ~ListTag();
		void ~ListTag();
		void ~ListTag();
		void ~ListTag();
};
