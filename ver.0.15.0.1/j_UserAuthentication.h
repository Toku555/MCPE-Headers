#pragma once
namespace j{
	class UserAuthentication{
		public:
		void getClientRandomId(void);
		void regenerateSelfSigned(std::string const&);
	}
};
