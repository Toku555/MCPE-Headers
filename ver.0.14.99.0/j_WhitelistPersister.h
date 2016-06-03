#pragma once
namespace j{
	class WhitelistPersister{
		public:
		void loadFromFile(Whitelist &,std::string const&);
		void saveToFile(Whitelist &,std::string const&);
	}
};
