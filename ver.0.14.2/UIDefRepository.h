#pragma once
class UIDefRepository{
	public:
		UIDefRepository(void);
		void _addNamespace(std::string const&);
		void _resolveReferences(UIDefRepository::DefEntry &,std::vector<UIDefRepository::DefEntry,std::allocator<UIDefRepository::DefEntry>> &);
		void findDef(std::string const&,std::string const&);
};
