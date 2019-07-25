#ifdef NDEBUG
#undef NDEBUG
#endif

#include <sys/time.h>
#include <assert.h>

int main()
{
	assert(sizeof(struct timeval) > 0);
}
