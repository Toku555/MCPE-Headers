#pragma once
class Localization{
	public:
		void _appendTranslations(std::string const&);
		void _get(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void _getSimple(std::string const&);
		void _getState(void);
		void _getStrings(void);
		void _load(std::string const&);
		void _parseFormattedString(std::string const&);
		void _setState(Localization::State);
		void get(std::string const&,std::string &,std::vector<std::string,std::allocator<std::string>> const&);
		void getCommaSeperator(void);
		void getFullLanguageCode(void);
		void getLanguageCode(std::string const&);
		void getLanguageCode(void);
		void getStringIdExists(std::string const&);
		void isFormattedString(std::string const&);
};
