#pragma once
namespace Whitelist{
	class UuidCompare{
		public:
		void operator();
		void add(mce::UUID const&);
		void clear(void);
		void inList(mce::UUID const&);
		void isAllowed(mce::UUID const&);
		void remove(mce::UUID const&);
		void ~Whitelist();
	}
};
