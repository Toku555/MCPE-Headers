#pragma once
class Tag{
	public:
		Tag(std::string const&);
		void deleteChildren(void);
		void equals(Tag const&);
		void getName(void);
		void getTagName(Tag::Type);
		void newTag(Tag::Type,std::string const&);
		void print(PrintStream &);
		void print(std::string const&,PrintStream &);
		void readNamedTag(IDataInput &,std::string &);
		void setName(std::string const&);
		void writeNamedTag(std::string const&,Tag const&,IDataOutput &);
		void ~Tag();
		void ~Tag();
};
