#pragma once
class LayoutComponent{
	public:
		LayoutComponent(std::shared_ptr<UIControl> &);
		void _setGridSizeToChildren(GridComponent &);
		void clone(std::shared_ptr<UIControl> &);
		void getAnchorFrom(void);
		void getAnchorTo(void);
		void getComputedPosition(void);
		void getContained(void);
		void getDraggable(void);
		void getFollowsCursor(void);
		void getOffset(void);
		void getOffsetDelta(void);
		void getOriginalSize(void);
		void getSize(void);
		void isBeingDragged(void);
		void setAnchorFrom(UI::AnchorPoint);
		void setAnchorTo(UI::AnchorPoint);
		void setContained(bool);
		void setDraggable(UI::Draggable);
		void setFollowsCursor(bool);
		void setOffset(UI::LayoutOffset const&);
		void setOffsetDelta(glm::detail::tvec2<float> const&);
		void setOriginalSize(UI::LayoutOffset const&);
		void setSize(UI::LayoutOffset const&);
		void ~LayoutComponent();
		void ~LayoutComponent();
};
