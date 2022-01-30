#ifndef _COMPAT_SYS_STAT_H_
# define _COMPAT_SYS_STAT_H_

# ifndef S_ISTXT
#  define S_ISTXT  S_ISVTX	/* sticky bit */
# endif /* ifndef S_ISTXT */

# ifndef st_atimespec
#  define st_atimespec		st_atim
# endif /* ifndef st_atimespec */

# ifndef st_atimensec
#  define st_atimensec		st_atim.tv_nsec
# endif /* ifndef st_atimensec */

# ifndef st_mtimespec
#  define st_mtimespec		st_mtim
# endif /* ifndef st_mtimespec */

# ifndef st_mtimensec
#  define st_mtimensec		st_mtim.tv_nsec
# endif /* ifndef st_mtimensec */

# ifndef st_ctimespec
#  define st_ctimespec		st_ctim
# endif /* ifndef st_ctimespec */

# ifndef st_ctimensec
#  define st_ctimensec		st_ctim.tv_nsec
# endif /* ifndef st_ctimensec */

#endif /* !_COMPAT_SYS_STAT_H_ */

#include_next <sys/stat.h>
