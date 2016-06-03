#pragma once
namespace j{
	class OfferRepository{
		public:
		void _addPurchaseToOffer(PurchaseInfo const&,bool);
		void getCategoryName(int);
		void getNumOfferCategories(void);
		void getNumOffersInCategory(int);
		void getOfferById(std::string const&);
		void isRealmsTrialOfferAvailable(RealmsOfferType,RealmsOfferPeriod,RealmsOfferTier);
	}
};
