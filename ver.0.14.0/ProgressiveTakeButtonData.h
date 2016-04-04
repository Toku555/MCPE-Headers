#pragma once
class ProgressiveTakeButtonData{
	public:
		ProgressiveTakeButtonData(void);
		void getAmountTaken(void);
		void getButtonId(void);
		void getCollectionIndex(void);
		void getCollectionName(void);
		void getTotalStackCount(void);
		void setAmountTaken(int);
		void setButtonId(short);
		void setCollectionIndex(int);
		void setCollectionName(std::string const&);
		void setTotalStackCount(int);
};
