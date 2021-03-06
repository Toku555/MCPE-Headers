#pragma once
namespace AppPlatform{
	class android{
		public:
		AppPlatform_android(void);
		void _CallStringMethod(_JNIEnv *,_jmethodID *);
		void buyGame(void);
		void checkLicense(void);
		void convertOpenGlToAndroidPixels(int,int,uint *);
		void createUUID(void);
		void createUserInput(void);
		void discardBackbuffer(void);
		void finish(void);
		void getApplicationId(void);
		void getAvailableMemory(void);
		void getBroadcastAddresses(void);
		void getDataUrl(void);
		void getDateString(int);
		void getDeviceId(void);
		void getExternalStoragePath(void);
		void getGraphicsExtensions(void);
		void getGraphicsRenderer(void);
		void getGraphicsVendor(void);
		void getGraphicsVersion(void);
		void getImagePath(std::string const&,bool);
		void getInternalStoragePath(void);
		void getKeyFromKeyCode(int,int,int);
		void getKeyboardHeight(void);
		void getModelName(void);
		void getPixelsPerMillimeter(void);
		void getPlatformStringVar(int);
		void getScreenHeight(void);
		void getScreenType(void);
		void getScreenWidth(void);
		void getSystemRegion(void);
		void getUserInput(void);
		void getUserInputStatus(void);
		void getUserdataPath(void);
		void hasBuyButtonWhenInvalidLicense(void);
		void hasHardwareInformationChanged(void);
		void hideKeyboard(void);
		void init(_JavaVM *);
		void initConsts(ENGINE *);
		void initWithActivity(ANativeActivity *);
		void isFirstSnoopLaunch(void);
		void isNetworkEnabled(bool);
		void isPowerVR(void);
		void isTablet(void);
		void launchUri(std::string const&);
		void loadPNG(ImageData &,std::string const&,bool);
		void loadTGA(ImageData &,std::string const&,bool);
		void pickImage(ImagePickingCallback &);
		void readAssetFile(std::string const&);
		void showDialog(int);
		void showKeyboard(std::string const&,int,bool,bool,Vec2 const&);
		void supportsVibration(void);
		void swapBuffers(void);
		void tick(void);
		void updateTextBoxText(std::string const&);
		void uploadPlatformDependentData(int,void *);
		void vibrate(int);
		void ~AppPlatform_android();
		void ~AppPlatform_android();
	}
};
