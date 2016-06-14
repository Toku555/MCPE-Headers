#pragma once
class SkinPack{
	public:
		SkinPack(Offer *,SkinPack::SkinPackType,std::string const&,std::string const&,ResourceLocation const&,int,std::initializer_list<Skin> const&);
		SkinPack(Offer *,SkinPack::SkinPackType,std::string const&,std::string const&,ResourceLocation const&,int,std::initializer_list<Skin> const&);
		void getLocationForKeyArt(void);
		void getLocationForKeyArt(void);
		void getName(void);
		void getName(void);
		void getOffer(void);
		void getOffer(void);
		void getPackIndex(void);
		void getPackIndex(void);
		void getPrice(void);
		void getPrice(void);
		void getSerializableName(void);
		void getSerializableName(void);
		void getSkinPackType(void);
		void getSkinPackType(void);
		void getSkins(void);
		void getSkins(void);
		void isPremiumUnlocked(void);
		void isPremiumUnlocked(void);
		void operator==(SkinPack const&);
		void ~SkinPack();
		void ~SkinPack();
};
