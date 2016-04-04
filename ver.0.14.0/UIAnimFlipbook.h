#pragma once
class UIAnimFlipbook{
	public:
		UIAnimFlipbook(UIResolvedDef const&);
		void _getBindableProperty(std::string const&);
		void getInitialValueKey(void);
		void tick(UIControl &,float);
		void ~UIAnimFlipbook();
		void ~UIAnimFlipbook();
};
