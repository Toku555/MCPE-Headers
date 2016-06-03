#pragma once
namespace ui{
	class AxisOffset{
		public:
		void AxisOffset(ui::LayoutAxisType,float,ui::LayoutAxisOperation);
		void AxisOffset(ui::LayoutAxisType,float,ui::LayoutAxisOperation);
		void AxisOffset(void);
		void LayoutOffset(Json::Value const&);
		void LayoutOffset(Json::Value const&);
		void LayoutOffset(glm::detail::tvec2<float>);
		void LayoutOffset(std::string const&,std::string const&);
		void LayoutOffset(ui::LayoutAxisType,float,ui::LayoutAxisType,float);
		void LayoutOffset(ui::LayoutOffset const&);
		void LayoutOffset(ui::LayoutOffset const&);
		void LayoutOffset(void);
		void LayoutOffset(void);
		void SliceSize(float);
		void SliceSize(float,float,float,float);
		void SliceSize(float,float,float,float);
		void SliceSize(void);
		void SliceSize(void);
		void parseLayoutAxis(Json::Value const&,int,ui::LayoutAxisType);
		void parseLayoutAxis(Json::Value const&,int,ui::LayoutAxisType);
	}
};
