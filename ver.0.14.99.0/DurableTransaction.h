#pragma once
class DurableTransaction{
	public:
		DurableTransaction(GameStore &,PurchaseCache &);
		DurableTransaction(GameStore &,PurchaseCache &);
		void transactFulfillment(Offer &,std::shared_ptr<Purchase>,std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>);
		void transactFulfillment(Offer &,std::shared_ptr<Purchase>,std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>);
		void transactPurchase(Offer &,TransactionContext &);
		void transactPurchase(Offer &,TransactionContext &);
		void ~DurableTransaction();
		void ~DurableTransaction();
		void ~DurableTransaction();
		void ~DurableTransaction();
};
