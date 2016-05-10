#pragma once
class PropertyFile{
	public:
		void readPropertyMapFromFile(std::string const&);
		void savePropertiesToFile(std::string const&,std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>> const&);
		void savePropertyMapToFile(std::string const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const&);
};
