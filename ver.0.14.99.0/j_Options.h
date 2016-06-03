#pragma once
namespace j{
	class Options{
		public:
		void string>(Options::Option const*,std::string const&,std::vector<Options::OptionObserver<std::string>,std::allocator<Options::OptionObserver<std::string>>> const&);
		void getDevCreateRealmWithoutPurchase(void);
		void getDevRenderBoundingBoxes(void);
		void getFancyGraphics(void);
		void getHideGui(void);
		void getRenderDebug(void);
		void getVROptionsComfortControls(void);
		void getVRShowComfortSelectScreen(void);
		void isLeftHanded(void);
		void save(void);
		void set(Options::Option const*,float);
		void set(Options::Option const*,int);
		void setPlayerViewPerspective(int);
		void setRenderDebug(bool);
		void setVROptionsComfortControls(bool);
		void toggle(Options::Option const*,int);
	}
};
