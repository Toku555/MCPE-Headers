#pragma once
class SkinPack{
	public:
		SkinPack(SkinPack::SkinPackType,std::string const&,std::string,bool,std::initializer_list<Skin> const&);
		void getName(void);
		void getPrice(void);
		void getSerializableName(void);
		void getSkinPackType(void);
		void getSkins(void);
		void isPremiumUnlocked(void);
		void operator==(SkinPack const&);
		void setPremiumUnlocked(bool);
		void setPrice(std::string const&);
};
