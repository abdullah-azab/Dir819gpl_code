#define HAVE_CHMOD
#define HAVE_CHOWN
#define HAVE_CLOCK
#define HAVE_DIRENT_H
#define HAVE_DLCLOSE
#define HAVE_DLFCN_H
#define HAVE_DLOPEN
#define HAVE_DLSYM
#define HAVE_ENDSERVENT
#define HAVE_EXTERNAL_TIMEZONE
#define HAVE_FCHMOD
#define HAVE_FCHOWN
#define HAVE_FSYNC
#define HAVE_GETENV
#define HAVE_GETEUID
#define HAVE_GETGID
#define HAVE_GETGRGID
#define HAVE_GETHOSTBYNAME2
#define HAVE_GETHOSTNAME
#define HAVE_GETOPT
#define HAVE_GETPASS
#define HAVE_GETPGRP
#define HAVE_GETPID
#define HAVE_GETPPID
#define HAVE_GETPWUID
#define HAVE_GETRUSAGE
#define HAVE_GETSERVBYNAME
#define HAVE_GETSERVBYPORT
#define HAVE_GETTIMEOFDAY
#define HAVE_GETUID
#define HAVE_GRP_H
#define HAVE_INET_ATON
#define HAVE_KERNEL_INT
#define HAVE_KERNEL_LONG
#define HAVE_KERNEL_LONG_LONG
#define HAVE_KERNEL_SHORT
#define HAVE_KERNEL_VOID_P
#define HAVE_KEY_SECRETKEY_IS_SET
#define HAVE_LIBC_STACK_END
#define HAVE_LIMITS_H
#define HAVE_LOCALTIME
#define HAVE_LOCKF
#define HAVE_LSTAT
#define HAVE_MEMCPY
#define HAVE_MEMSET
#define HAVE_MPROTECT
#define HAVE_NANOSLEEP
#define HAVE_NETINET_IN_H
#define HAVE_NETINET_IN_SYSTM_H
#define HAVE_NO_SYMBOL_UNDERSCORE
#define HAVE_PATHS_H
#define HAVE_POLL
#define HAVE_PUTENV
#define HAVE_PWD_H
#define HAVE_RANDOM
#define HAVE_SELECT
#define HAVE_SETSID
#define HAVE_SIGNAL
#define HAVE_SLEEP
#define HAVE_SOCKADDR_IN6_SCOPE_ID
#define HAVE_SOCKADDR_IN6_STRUCT
#define HAVE_SOCKLEN_T
#define HAVE_STRCASECMP
#define HAVE_STRCHR
#define HAVE_STRERROR
#define HAVE_STRNCASECMP
#define HAVE_SYS_IOCTL_H
#define HAVE_SYS_POLL_H
#define HAVE_SYS_SELECT_H
#define HAVE_SYS_TIME_H
#define HAVE_SYS_UN_H
#define HAVE_SYS_UTSNAME_H
#define HAVE_SYS_WAIT_H
#define HAVE_TERMIOS_H
#define HAVE_TIMES
#define HAVE_TM_GMTOFF_IN_STRUCT_TM
#define HAVE_TM_ISDST_IN_STRUCT_TM
#define HAVE_UNAME
#define HAVE_UNISTD_H
#define HAVE_USERMODE_INT
#define HAVE_USERMODE_LONG
#define HAVE_USERMODE_LONG_LONG
#define HAVE_USERMODE_SHORT
#define HAVE_USERMODE_VOID_P
#define HAVE_USLEEP
#define HAVE_UTIME
#define HAVE_VAR_RUN

#ifdef __KERNEL__

#include <asm/types.h>

#define KERNEL_SIZEOF_INT 4
#define KERNEL_SIZEOF_LONG 4
#define KERNEL_SIZEOF_LONG_LONG 8
#define KERNEL_SIZEOF_SHORT 2

#if BITS_PER_LONG == 64
#define KERNEL_SIZEOF_SIZE_T 8
#define KERNEL_SIZEOF_VOID_P 8
#else
#define KERNEL_SIZEOF_SIZE_T 4
#define KERNEL_SIZEOF_VOID_P 4
#endif

#else

#include <bits/wordsize.h>

#define USERMODE_SIZEOF_INT 4
#define USERMODE_SIZEOF_LONG 4
#define USERMODE_SIZEOF_LONG_LONG 8
#define USERMODE_SIZEOF_SHORT 2

#if __WORDSIZE == 64
#define USERMODE_SIZEOF_SIZE_T 8
#define USERMODE_SIZEOF_VOID_P 8
#else
#define USERMODE_SIZEOF_SIZE_T 4
#define USERMODE_SIZEOF_VOID_P 4
#endif

#endif