#pragma once
class ClientSkinInfoData{
	public:
		ClientSkinInfoData(void);
		void getData(void);
		void getDataLength(void);
		void getTextureData(void);
		void hasValidTexture(void);
		void updateSkin(std::string const&,std::string const&);
		void ~ClientSkinInfoData();
		void ~ClientSkinInfoData();
};
