#pragma once
class Util{
	public:
		void compareNoCase(std::string,std::string);
		void endsWith(std::string const&,std::string const&);
		void getExtension(std::string const&);
		void hashCode(std::string const&);
		void removeAll(std::string &,char const**,int);
		void simpleFormat(std::string const&,std::vector<std::string,std::allocator<std::string>>);
		void startsWith(std::string const&,std::string const&);
		void stringReplace(std::string &,std::string const&,std::string const&,int);
		void function<void ();
		void stringTrim(std::string const&);
		void stringTrim(std::string const&,std::string const&,bool,bool);
		void toLower(std::string const&);
		void toString(float);
		void toString(int);
		void utf8len(std::string const&);
		void utf8substring(std::string const&,int,int);
};
