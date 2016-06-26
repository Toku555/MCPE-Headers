#pragma once
namespace glm{
	class detail{
		public:
		void operator*<float>(glm::detail::tmat4x4<float> const&,glm::detail::tmat4x4<float>::row_type const&);
		void operator+<float>(glm::detail::tvec4<float> const&,glm::detail::tvec4<float> const&);
		void operator=(glm::detail::tmat4x4<float> const&);
		void tmat4x4(float const&);
		void tmat4x4(glm::detail::tmat4x4<float>::ctor);
		void operator=(glm::detail::tvec4<float> const&);
		void rotate<float>(glm::detail::tmat4x4<float> const&,float const&,glm::detail::tvec3<float> const&);
	}
};
