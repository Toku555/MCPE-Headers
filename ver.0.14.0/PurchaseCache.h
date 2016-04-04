#pragma once
class PurchaseCache{
	public:
		PurchaseCache(std::string,std::string);
		void load(void);
		void setSingleInternal(PurchaseInfo const&);
		void setSingleValid(std::string);
		void setValidatedList(std::vector<PurchaseInfo,std::allocator<PurchaseInfo>> const&);
};
