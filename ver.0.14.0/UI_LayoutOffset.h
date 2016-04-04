#pragma once
namespace UI{
	class LayoutOffset{
		public:
		void LayoutOffset(Json::Value const&);
		void LayoutOffset(UI::LayoutAxisType,float,UI::LayoutAxisType,float);
		void LayoutOffset(glm::detail::tvec2<float>);
		void LayoutOffset(std::string const&,std::string const&);
		void LayoutOffset(void);
		void defaultValues(void);
		void parseLayoutAxis(Json::Value const&,int,UI::LayoutAxisType);
	}
};
