#pragma once
class CSHA1{
	public:
		CSHA1(void);
		void Final(void);
		void GetHash(uchar *);
		void GetHash(void);
		void HashFile(char *);
		void ReportHash(char *,uchar);
		void Reset(void);
		void Transform(uint *,uchar *);
		void Update(uchar *,uint);
		void ~CSHA1();
		void ~CSHA1();
};
