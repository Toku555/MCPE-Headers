#pragma once
namespace AppPlatform{
	class android{
		public:
		AppPlatform_android(void);
		void abortWebRequest(int);
		void buyGame(void);
		void checkLicense(void);
		void clearSessionIDAndRefreshToken(void);
		void convertOpenGlToAndroidPixels(int,int,uint *);
		void createUserInput(void);
		void finish(void);
		void getDateString(int);
		void getImagePath(std::string const&,bool);
		void getKeyFromKeyCode(int,int,int);
		void getLoginInformation(void);
		void getPixelsPerMillimeter(void);
		void getPlatformStringVar(int);
		void getScreenHeight(void);
		void getScreenWidth(void);
		void getUserInput(void);
		void getUserInputStatus(void);
		void getWebRequestContent(int);
		void getWebRequestStatus(int);
		void hasBuyButtonWhenInvalidLicense(void);
		void hideKeyboard(void);
		void init(_JavaVM *);
		void initWithActivity(ANativeActivity *);
		void isNetworkEnabled(bool);
		void isPowerVR(void);
		void loadPNG(ImageData &,std::string const&,bool);
		void loadTGA(ImageData &,std::string const&,bool);
		void openLoginWindow(void);
		void playSound(std::string const&,float,float);
		void readAssetFile(std::string const&);
		void saveScreenshot(std::string const&,int,int);
		void setLoginInformation(LoginInformation const&);
		void showDialog(int);
		void showKeyboard(std::string const&,int,bool);
		void statsTrackData(std::string const&,std::string const&);
		void supportsTouchscreen(void);
		void supportsVibration(void);
		void updateStatsUserData(std::string const&,std::string const&);
		void updateTextBoxText(std::string const&);
		void uploadPlatformDependentData(int,void *);
		void vibrate(int);
		void webRequest(int,long long,std::string const&,std::string const&,std::string const&,std::string const&);
		void ~AppPlatform_android();
		void ~AppPlatform_android();
	}
};
