#pragma once
class UIDefRepository{
	public:
		UIDefRepository(void);
		void _addNamespace(std::string const&);
		void _collectAllDefEntries(std::string const&,std::vector<UIDefRepository::DefEntry,std::allocator<UIDefRepository::DefEntry>> &);
		void _resolveReferences(UIDefRepository::DefEntry &,std::vector<UIDefRepository::DefEntry,std::allocator<UIDefRepository::DefEntry>> &);
		void findDef(std::string const&,std::string const&);
		void loadDefsList(std::string const&);
};
