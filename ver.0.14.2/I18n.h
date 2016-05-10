#pragma once
class I18n{
	public:
		void _addFormatToDictionary(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void _getFormatParmas(std::string const&,std::vector<std::string,std::allocator<std::string>> &);
		void _getKeyExists(std::string const&);
		void _initFormatDictionary(void);
		void chooseLanguage(Localization const&);
		void chooseLanguage(std::string const&);
		void get(std::string const&);
		void get(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void getCurrentLanguage(void);
		void getLocaleFor(std::string const&);
		void getSupportedLocales(void);
		void loadLanguages(void);
};
