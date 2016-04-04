#pragma once
class GameStore{
	public:
		GameStore(void);
		void allowsQueryPurchasesOnStartup(void);
		void getStoreId(void);
		void isAvailable(void);
		void isTrial(void);
		void onAppPurchaseCanceled(void);
		void onAppPurchaseFailed(void);
		void onAppPurchaseSuccess(void);
		void onPurchaseCanceled(std::string const&);
		void onPurchaseFailed(std::string const&);
		void onPurchaseSuccessful(std::string const&);
		void onQueryProductsFail(void);
		void onQueryProductsSuccess(std::vector<Product,std::allocator<Product>> const&);
		void onQueryPurchasesFail(void);
		void onQueryPurchasesSuccess(std::vector<PurchaseInfo,std::allocator<PurchaseInfo>> const&);
		void onStoreInitialized(bool);
		void function<void ();
		void function<void ();
		void function<void ();
		void function<void ();
		void registerListener(StoreListener &);
		void unregisterListener(StoreListener &);
		void ~GameStore();
		void ~GameStore();
};
