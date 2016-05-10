#pragma once
class Skin{
	public:
		Skin(std::string const&,std::string const&,std::string const&,std::string const&,Skin::SkinType);
		void getGeometryName(void);
		void getName(void);
		void getPath(void);
		void getSerializable(void);
		void getSkinPack(void);
		void isCustomSkin(void);
		void isPremium(void);
		void operator==(Skin const&);
		void premiumLocked(void);
		void setSkinPack(SkinPack *);
};
