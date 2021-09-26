#ifdef NDEBUG
#undef NDEBUG
#endif

#include <sys/time.h>
#include <assert.h>
#include <stdio.h>

int main()
{
	assert(sizeof(struct timeval) > 0);

	struct timeval tv;
	gettimeofday(&tv, NULL);

	printf("gettimeofday : %ld %ld", tv.tv_sec, tv.tv_usec);
}
