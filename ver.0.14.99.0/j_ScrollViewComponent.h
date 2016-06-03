#pragma once
namespace j{
	class ScrollViewComponent{
		public:
		void _updateDynamicsAndScrollPosition(mce::TimeStep const&);
		void setGestureControlMode(bool);
		void setScrollContent(std::shared_ptr<UIControl> &);
		void setScrollViewPort(std::shared_ptr<UIControl> &);
	}
};
