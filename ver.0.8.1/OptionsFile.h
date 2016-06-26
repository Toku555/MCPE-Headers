#pragma once
class OptionsFile{
	public:
		void getOptionStrings(void);
		void save(std::vector<std::string,std::allocator<std::string>> const&);
		void setSettingsFolderPath(std::string const&);
};
