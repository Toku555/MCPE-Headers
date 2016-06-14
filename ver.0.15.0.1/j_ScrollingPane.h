#pragma once
namespace j{
	class ScrollingPane{
		public:
		void _handleMouseInput(float,bool);
		void _onSelect(int);
		void calculateAndSetCurrentMouseScrollT(void);
		void onNavigate(int);
		void refreshPane(void);
		void scrollDownBy(float);
		void scrollUpBy(float);
		void setRenderSelected(bool);
		void setScrollT(float);
		void tick(void);
		void touchesEnded(float,float,int);
	}
};
