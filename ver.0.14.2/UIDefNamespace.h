#pragma once
class UIDefNamespace{
	public:
		UIDefNamespace(std::string const&);
		void addDefToNamespace(std::string const&,Json::Value &);
		void findDefInNamespace(std::string const&);
};
