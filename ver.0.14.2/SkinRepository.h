#pragma once
class SkinRepository{
	public:
		SkinRepository(Options &,GeometryGroup &,GameStore &,mce::TextureGroup &,std::string const&,ulong long);
		void _getProductIdFromSkinPackId(std::string const&);
		void _getSkinPack(std::string const&);
		void _isValidSkin(std::string const&);
		void _setDefaultSkin(void);
		void _setOwnedPurchases(std::vector<PurchaseInfo,std::allocator<PurchaseInfo>> const&);
		void getCustomSkinPath(void);
		void getDefaultSkin(SkinRepository::DefaultSkin);
		void getLastCustomSkinId(void);
		void getPreviewSkinForSkinPack(SkinPack const&);
		void getSelectedSkin(void);
		void getSkin(std::string const&);
		void getSkinPacks(void);
		void hasValidCustomSkin(void);
		void onAppPurchaseCanceled(void);
		void onAppPurchaseFailed(void);
		void onAppPurchaseSuccess(void);
		void onImagePickingCanceled(void);
		void onPurchaseCanceled(std::string const&);
		void onPurchaseFailed(std::string const&);
		void onPurchaseSuccessful(std::string const&);
		void onQueryProductsFail(void);
		void onQueryProductsSuccess(std::vector<Product,std::allocator<Product>> const&);
		void onQueryPurchasesFail(void);
		void onQueryPurchasesSuccess(std::vector<PurchaseInfo,std::allocator<PurchaseInfo>> const&);
		void onStoreInitialized(bool);
		void setLastCustomSkin(Skin const&);
		void setSkin(Skin const&);
		void storeCustomSkin(std::string const&);
		void ~SkinRepository();
		void ~SkinRepository();
};
