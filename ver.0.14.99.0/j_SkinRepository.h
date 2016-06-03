#pragma once
namespace j{
	class SkinRepository{
		public:
		void getNumRecentSkins(void);
		void saveRecentSkins(void);
		void setLastCustomSkin(Skin const&);
		void setSkin(Skin const&,bool);
	}
};
