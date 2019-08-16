#ifndef _SHA1_H
#define _SHA1_H
#ifdef __cplusplus
extern "C" {
#endif

void sha1(const unsigned char *in, unsigned long len, unsigned char dst[]);

#ifdef __cplusplus
	}
#endif
#endif

