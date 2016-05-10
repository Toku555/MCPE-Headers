#pragma once
class md5{
	public:
		void body(void const*,uint);
		void final(uchar *);
		void getUUID(void);
		void hash(std::string const&);
		void init(void);
		void update(void const*,uint);
};
