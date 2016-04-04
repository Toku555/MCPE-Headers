#pragma once
class AndroidStore{
	public:
		AndroidStore(_jobject *,NativeStoreListener);
		void allowsQueryPurchasesOnStartup(void);
		void createAmazonAppStore(StoreListener &);
		void createGooglePlayStore(std::string const&,StoreListener &);
		void createSamsungAppStore(StoreListener &);
		void getStoreId(void);
		void handleLicenseChange(void);
		void isGamePurchased(void);
		void isTrial(void);
		void purchase(std::string const&);
		void purchaseGame(void);
		void queryProducts(std::vector<std::string,std::allocator<std::string>> const&);
		void queryPurchases(void);
		void function<void ();
		void ~AndroidStore();
		void ~AndroidStore();
};
