#pragma once
class CSHA1{
	public:
		CSHA1(void);
		CSHA1(void);
		void Final(void);
		void Final(void);
		void GetHash(uchar *);
		void GetHash(void);
		void GetHash(void);
		void HashFile(char const*);
		void ReportHash(char *,CSHA1::REPORT_TYPE);
		void ReportHash_a(char *,CSHA1::REPORT_TYPE);
		void Reset(void);
		void Reset(void);
		void Transform(ulong *,uchar const*);
		void Transform(ulong *,uchar const*);
		void Update(uchar const*,ulong);
		void Update(uchar const*,ulong);
		void ~CSHA1();
		void ~CSHA1();
};
