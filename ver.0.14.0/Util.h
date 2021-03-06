#pragma once
class Util{
	public:
		void base64_decode(std::string const&);
		void base64_encode(uchar const*,uint);
		void compareNoCase(std::string const&,std::string const&);
		void countWordOccurrences(std::string const&,std::string const&);
		void endsWith(std::string const&,std::string const&);
		void formatTickDuration(int);
		void freeStringMemory(std::string &);
		void getBezier(float,float,float,float);
		void getDirectory(std::string const&);
		void getPoint(float,float,float);
		void hashCode(std::string const&);
		void isValidPath(std::string const&);
		void removeAll(std::string &,char const**,int);
		void removeIllegalChars(std::string const&);
		void simpleFormat(std::string const&,std::vector<std::string,std::allocator<std::string>>);
		void split(std::string const&,char);
		void split(std::string const&,std::vector<std::string,std::allocator<std::string>> const&,bool);
		void splitString(std::string const&,char,std::vector<std::string,std::allocator<std::string>> &);
		void startsWith(std::string const&,std::string const&);
		void stringContains(std::string const&,char);
		void stringReplace(std::string &,std::string const&,std::string const&,int);
		void stringTrim(std::string const&);
		void toHex(char);
		void toInt(std::string const&,int &,int,int);
		void toLower(std::string const&);
		void toNiceString(int);
		void toString(float);
		void toString(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>> const&);
		void toString<int,(void *);
		void toString<long long,(void *);
		void toString<short,(void *);
		void toWideString(std::string const&);
		void utf8len(std::string const&,bool);
		void utf8substring(std::string const&,int,int);
};
