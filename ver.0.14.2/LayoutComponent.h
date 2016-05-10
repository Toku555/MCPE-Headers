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
		void setAnchorFrom(ui::AnchorPoint);
		void setAnchorTo(ui::AnchorPoint);
		void setContained(bool);
		void setDraggable(ui::Draggable);
		void setFollowsCursor(bool);
		void setOffset(ui::LayoutOffset const&);
		void setOffsetDelta(glm::detail::tvec2<float> const&);
		void setOriginalSize(ui::LayoutOffset const&);
		void setSize(ui::LayoutOffset const&);
		void ~LayoutComponent();
		void ~LayoutComponent();
};
