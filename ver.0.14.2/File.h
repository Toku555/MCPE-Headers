#pragma once
class File{
	public:
		void cleanPath(std::string const&);
		void copyFile(std::string const&,std::string const&);
		void createFolder(std::string const&);
		void deleteEmptyDirectory(std::string const&);
		void exists(std::string const&);
		void getFileStat(std::string const&);
		void getLastModifiedDateAsLocalTime(stat const&);
		void getRemainingSize(__sFILE *);
		void isDirectory(stat const&);
		void splitPath(std::string const&);
};
