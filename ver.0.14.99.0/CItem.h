#pragma once
class CItem{
	public:
		CItem(CItem const&);
		CItem(CItem const&);
		CItem(ItemInstance const&,Recipe *,std::string const&);
		CItem(ItemInstance const&,Recipe *,std::string const&);
		void operator=(CItem&&);
		void operator=(CItem&&);
};
