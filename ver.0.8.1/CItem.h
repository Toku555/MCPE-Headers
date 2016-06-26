#pragma once
class CItem{
	public:
		CItem(ItemInstance const&,Recipe *,std::string const&);
		void ReqItem(CItem::ReqItem const&);
		void ~CItem();
};
