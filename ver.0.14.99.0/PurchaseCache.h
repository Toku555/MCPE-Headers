#pragma once
class PurchaseCache{
	public:
		PurchaseCache(std::string,std::string);
		PurchaseCache(std::string,std::string);
		void _findRecord(ProductId const&);
		void _load(void);
		void _load(void);
		void _save(void);
		void _save(void);
		void _signTransactionRecords(std::vector<TransactionRecord,std::allocator<TransactionRecord>> const&);
		void _signTransactionRecords(std::vector<TransactionRecord,std::allocator<TransactionRecord>> const&);
		void createRecord(ProductId const&,std::string const&);
		void createRecord(ProductId const&,std::string const&);
		void getPayloadFromRecord(ProductId const&);
		void getPayloadFromRecord(ProductId const&);
		void isPurchaseFulfilled(ProductId const&);
		void isPurchaseFulfilled(ProductId const&);
		void updateRecord(ProductId const&,std::string const&,bool);
		void updateRecord(ProductId const&,std::string const&,bool);
		void ~PurchaseCache();
		void ~PurchaseCache();
};
