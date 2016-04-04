#pragma once
class SkinInfoData{
	public:
		SkinInfoData(void);
		void copySkinPart(std::string &,int,int,int,int,int,int,int,int);
		void getGeometryName(void);
		void getSkinId(void);
		void getTextureData(void);
		void getVisualModel(void);
		void setForceAlpha(std::string &,int,int,int,int);
		void setNoAlpha(std::string &,int,int,int,int);
		void setVisualModel(std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>);
		void updateSkin(std::string const&,std::string const&);
		void validateAlpha(std::string &,int,int,int,int,float);
		void validateAndResizeSkinData(std::string &);
		void ~SkinInfoData();
		void ~SkinInfoData();
};
