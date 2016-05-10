#pragma once
class PortfolioScreenController{
	public:
		void _buildLastPage(void);
		void _handlePhotoDeleteLeftPage(PropertyBag *);
		void _handlePhotoDeleteRightPage(PropertyBag *);
		void _handlePortfolioExport(PropertyBag *);
		void _handlePortfolioPageBack(PropertyBag *);
		void _handlePortfolioPageNext(PropertyBag *);
		void _isStillValid(void);
		void _requestPage(int);
		void _saveCaptions(void);
		void onTerminate(void);
		void ~PortfolioScreenController();
		void ~PortfolioScreenController();
};
