#pragma once
class UIAnimFlipbook{
	public:
		UIAnimFlipbook(AnimationComponent &,UIResolvedDef const&);
		void _reset(UIControl &);
		void getInitialValueKey(void);
		void tick(UIControl &,float);
		void ~UIAnimFlipbook();
		void ~UIAnimFlipbook();
};
