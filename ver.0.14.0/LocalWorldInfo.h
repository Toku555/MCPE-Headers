#pragma once
class LocalWorldInfo{
	public:
		LocalWorldInfo(LevelSummary const&);
		void getFilesize(void);
		void getLevelSummary(void);
		void getLevelSummary(void);
		void getScreenshotTexture(void);
		void setFilesize(std::string const&);
		void setLevelSummary(LevelSummary);
		void setScreenshotTexture(std::string const&);
};
